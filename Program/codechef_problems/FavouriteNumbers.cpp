#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;           // number of test cases

    while (T--) {
        int A;
        cin >> A;       // the number

        // Check for Alice
        if (A % 2 == 0 && A % 7 == 0) {
            cout << "Alice\n";
        }
        // Check for Bob
        else if (A % 2 != 0 && A % 9 == 0) {
            cout << "Bob\n";
        }
        // Otherwise Charlie
        else {
            cout << "Charlie\n";
        }
    }
    return 0;
}
