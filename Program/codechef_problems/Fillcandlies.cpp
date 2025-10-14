#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;

     
        int bag_capacity = K * M;
        int bags = (N + bag_capacity - 1) / bag_capacity;

        cout << bags << endl;  
    }
    return 0;
}
