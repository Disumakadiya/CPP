#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        unordered_map<string,int> freq;
        for (int i = 0; i < N; ++i) {
            string s; cin >> s;
            ++freq[s];
        }
        cout << freq["START38"] << " " << freq["LTIME108"] << '\n';
    }
    return 0;
}
