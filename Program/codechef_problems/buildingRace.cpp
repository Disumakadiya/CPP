#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // number of test cases
    
    while (T--) {
        double A, B, X, Y;
        cin >> A >> B >> X >> Y;

        double timeChef = A / X;
        double timeChefina = B / Y;

        if (abs(timeChef - timeChefina) < 1e-9)  // handles floating point precision
            cout << "Both\n";
        else if (timeChef < timeChefina)
            cout << "Chef\n";
        else
            cout << "Chefina\n";
    }

    return 0;
}
