#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        int ans = (N + 5) / 6;
        int Total = X * ans;
        cout << Total << endl;
    }
}
