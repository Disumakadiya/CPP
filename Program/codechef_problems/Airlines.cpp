#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, N;
        cin >> X >> N;
        int total_required_planes = ceil((double)N / 100);
        int new_planes = max(0, total_required_planes - X);

        cout << new_planes << endl;
    }
    return 0;
}
