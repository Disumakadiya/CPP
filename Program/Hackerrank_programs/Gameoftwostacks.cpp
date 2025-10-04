//Brute Force
#include <bits/stdc++.h>
using namespace std;


int twoStacks(int x, vector<int> a, vector<int> b) {
    int n = a.size(), m = b.size();
    int maxCount = 0;


    
    for (int i = 0; i <= n; i++) {
        int sumA = accumulate(a.begin(), a.begin() + i, 0);
        if (sumA > x) break;

        for (int j = 0; j <= m; j++) {
            int sumB = accumulate(b.begin(), b.begin() + j, 0);
            if (sumA + sumB > x) break;
            maxCount = max(maxCount, i + j);
        }
    }
    return maxCount;
}

int main
 {
 vector<int> a = {4, 2, 4, 6, 1};
 vector<int> b = {2, 1, 8, 5};
 int x = 10;
 cout << twoStacks(x, a, b) << endl; // Output: 4
}

//Prefix+binary search approch
#include <bits/stdc++.h>
using namespace std;

int twoStacksBinary(int x, vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size();
    vector<long long> preA(n+1, 0), preB(m+1, 0);

    for (int i = 0; i < n; i++) preA[i+1] = preA[i] + a[i];
    for (int j = 0; j < m; j++) preB[j+1] = preB[j] + b[j];

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (preA[i] > x) break;
        int rem = x - preA[i];
        int j = upper_bound(preB.begin(), preB.end(), rem) - preB.begin() - 1;
        ans = max(ans, i + j);
    }
    return ans;
}
int main() 
{
    int x = 10;
    vector<int> a = {4, 2, 4, 6, 1};
    vector<int> b = {2, 1, 8, 5};

    cout << "Binary Search Result: " << twoStacksBinary(x, a, b) << endl;
    return 0;
}

//two pointer approch(greedy)
#include <bits/stdc++.h>
using namespace std;

int twoStacks(int x, vector<int> a, vector<int> b) {
    int i = 0, j = 0, res = 0;
    long long sum = 0;

    // take from b first as much as possible
    while (j < b.size() && sum + b[j] <= x) {
        sum += b[j];
        j++;
    }
    res = j;

    // now try to take from a and adjust b
    while (i < a.size() && sum + a[i] <= x) {
        sum += a[i];
        i++;

        while (j > 0 && sum > x) {
            j--;
            sum -= b[j];
        }
        res = max(res, i + j);
    }
    return res;
}
int main() {
 vector<int> a = {4, 2, 4, 6, 1};
 vector<int> b = {2, 1, 8, 5};
 int x = 10;
 cout << twoStacks(x, a, b) << endl; // Output: 4
}
