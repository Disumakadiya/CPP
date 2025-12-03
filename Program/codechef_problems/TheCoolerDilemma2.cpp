#include <bits/stdc++.h>
using namespace std;

int main() {
 
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long X, Y;
        cin >> X >> Y;
        // Maximum m with m*X < Y  => m = floor((Y-1)/X)
        long long ans = (Y - 1) / X;
        if (ans < 0) ans = 0; // defensive, though X,Y >= 1 by constraints
        cout << ans << '\n';
    }
    return 0;
}
