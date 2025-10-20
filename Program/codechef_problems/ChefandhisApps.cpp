#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;  

    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;

        int freeSpace = S - (X + Y); 

        if (freeSpace >= Z) {
            cout << 0 << "\n";   
            }
            else if (freeSpace + X >= Z || freeSpace + Y >= Z) 
            {
            cout << 1 << "\n";
        } 
        else 
        {
            cout << 2 << "\n";   
            }
    }

    return 0;
}
