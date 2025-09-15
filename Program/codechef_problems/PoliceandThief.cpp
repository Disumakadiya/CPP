#include <iostream>
#include <cmath>   

using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        // Minimum time = absolute difference
        cout << abs(X - Y) << endl;
    }
    
    return 0;
}
