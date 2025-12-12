#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if(!(cin >> T)) return 0;
    while (T--) {
        int N;
        cin >> N;
        
        if (N % 4 == 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
