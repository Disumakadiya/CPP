#include <bits/stdc++.h>
using namespace std;

int main() {

    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int N; cin >> N;
        vector<int> a(N);
        for (int i = 0; i < N; ++i) cin >> a[i];
        int degree = 0;
        for (int i = N - 1; i >= 0; --i) {
            if (a[i] != 0) { degree = i; break; }
        }
        cout << degree << '\n';
    }
    return 0;
}
