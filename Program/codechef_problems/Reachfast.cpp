#include <bits/stdc++.h>
using namespace std;

int main() {

    int T; 
    cin>>T;
    
    while (T--) {
        long long A, B, K;
        cin >> A >> B >> K;
        long long diff = llabs(A - B);
        long long steps = (diff + K - 1) / K;  // ceil division
        cout << steps << "\n";
    }
    return 0;
}
