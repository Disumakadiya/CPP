#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, O, C;
    cin >> R >> O >> C;

    int remainingOvers = 20 - O;
    int maxRunsPossible = remainingOvers * 36; 

    int finalScore = C + maxRunsPossible;

    if (finalScore > R)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
