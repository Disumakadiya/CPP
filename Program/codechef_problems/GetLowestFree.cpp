#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        int total = A + B + C;
        int smallest = min(A, min(B, C));
        cout << (total - smallest) << '\n';
    }
    return 0;
}
