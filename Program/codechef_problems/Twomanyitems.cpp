#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;  
        
        // Each bag can hold at most 10 items
        int bags = (N + 9) / 10; 
        cout << bags << "\n";
    }
    
    return 0;
}
