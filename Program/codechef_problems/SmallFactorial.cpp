#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int T;
    cin >> T;

    while(T--) {
        long long N;
        cin >> N;

        unsigned long long fact = 1;

        for(long long i = 1; i <= N; i++) {
            fact *= i;
        }

        cout << fact << "\n";
    }

    return 0;
}
