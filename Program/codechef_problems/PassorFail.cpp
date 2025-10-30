#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X, P;
        cin >> N >> X >> P;
        int score = 4 * X - N;   // Formula: 4*X - N
        if (score >= P)
            cout << "PASS\n";
        else
            cout << "FAIL\n";
    }
    return 0;
}
