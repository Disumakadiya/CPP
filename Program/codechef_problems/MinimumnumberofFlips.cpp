#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int sum = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        // If N is odd, it's impossible to make sum 0
        if (N % 2 != 0) {
            cout << -1 << "\n";
        } else {
            // Minimum operations = |sum| / 2
            cout << abs(sum) / 2 << "\n";
        }
    }

    return 0;
}
