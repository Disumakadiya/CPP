#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        // Alice's Rolls
        vector<int> A = {A1, A2, A3};
        // Bob's Rolls
        vector<int> B = {B1, B2, B3};

        // Sort in descending order to get top two easily
        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end(), greater<int>());

        // Best of 2 = sum of top 2 dice rolls
        int aliceScore = A[0] + A[1];
        int bobScore = B[0] + B[1];

        if (aliceScore > bobScore)
            cout << "Alice\n";
        else if (bobScore > aliceScore)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }

    return 0;
}
