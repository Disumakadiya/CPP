#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
   cin >>T;
   
    while (T--) {
        long long N;
        cin >> N;
        // Number of ways to choose captain and vice-captain (ordered, distinct)
        long long ways = N * (N - 1);
        cout << ways << '\n';
    }
    return 0;
}
