#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long M, N, K;
        cin >> M >> N >> K;

        long long totalTime = N * K;

        if (totalTime < M) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
