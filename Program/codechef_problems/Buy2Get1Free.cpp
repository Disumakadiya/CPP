#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;

        int groups = N / 3;        // groups of 3 items
        int remaining = N % 3;    // leftover items

        int itemsToPay = groups * 2 + remaining;
        int totalCost = itemsToPay * X;

        cout << totalCost << "\n";
    }
    return 0;
}
