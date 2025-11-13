#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long H, X, Y;
        cin >> H >> X >> Y;
        long long normalOnly = (H + X - 1) / X;

        // CASE 2: Special attack once, then normal
        long long specialFirst = 1; // using special attack once
        
        long long remaining = H - Y;

        if (remaining > 0) {
            specialFirst += (remaining + X - 1) / X;
        }
        // If remaining <= 0, then special attack alone is enough (specialFirst = 1)

        // Output the minimum attacks
        cout << min(normalOnly, specialFirst) << endl;
    }
    return 0;
}
