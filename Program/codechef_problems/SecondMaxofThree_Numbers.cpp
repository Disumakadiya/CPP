#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        cout << (a + b + c - mx - mn) << "\n";  
    }
    return 0;
}
