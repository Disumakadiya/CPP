#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    if(!(cin >> T)) return 0;
    while (T--) {
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;
        int overlap = 0;
        if (X == A || X == B) overlap++;
        if (Y == A || Y == B) overlap++;
        int ans = 2 - overlap;
        cout << ans << '\n';
    }
    return 0;
}
