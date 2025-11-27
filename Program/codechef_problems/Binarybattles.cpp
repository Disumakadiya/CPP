#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;              // number of test cases

    while (T--) {
        long long N, A, B;
        cin >> N >> A >> B;

        // Find number of rounds = log2(N)
        long long rounds = 0;
        long long temp = N;
        while (temp > 1) {
            temp /= 2;     // each round halves teams
            rounds++;
        }

        // Total time:
        // rounds * A minutes for playing
        // (rounds - 1) * B minutes for breaks
        long long totalTime = rounds * A + (rounds - 1) * B;

        cout << totalTime << "\n";
    }

    return 0;
}
