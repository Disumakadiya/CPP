#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        
        long long groups = N / 5; 
        long long rem = N % 5;

        long long coins = groups * 4 + rem;

        cout << coins << "\n";
    }
    return 0;
}
