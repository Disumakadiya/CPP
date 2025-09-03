#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        long long A, B;
        cin >> A >> B;
        long long val1 = 10 * A; 
        long long val2 = 5 * B;  

        if (val1 > val2)
            cout << "FIRST\n";
        else if (val1 < val2)
            cout << "SECOND\n";
        else
            cout << "ANY\n";
    }
    return 0;
}


