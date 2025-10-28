#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int scoreA_first = (500 - 2 * X) + (1000 - 4 * (X + Y));

        int scoreB_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));

        cout << max(scoreA_first, scoreB_first) << endl;
    }
    return 0;
}
