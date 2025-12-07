#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // number of test cases

    while(T--) {
        int N;
        cin >> N;
        
        int sum = 0;
        while(N > 0) {
            sum += N % 10; // add last digit
            N /= 10;       // remove last digit
        }

        cout << sum << endl;
    }
    return 0;
}
