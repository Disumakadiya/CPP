#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x, y, step;
        cin >> x >> y;

        if (y > x) {
            step = x;
        }
        else if (x % y == 0) {
            step = x / y; 
        } 
        else {
            int full_jumps = x / y;    // number of Y jumps
            int remaining = x % y;     // leftover stairs
            step = full_jumps + remaining; // add 1-step for each leftover
        }

        cout << step << endl;
    }

    return 0;
}
