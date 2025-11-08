#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        if (N < 2) {
            cout << 0 << "\n";
        } else {
            cout << ( (N - 2) / 7 ) + 1 << "\n";
        }
    }
    return 0;
}
