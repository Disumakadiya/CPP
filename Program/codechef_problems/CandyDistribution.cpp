#include <iostream>
using namespace std;

int main() {
    int T;

    
    cin >> T; 

    while (T--) {
        int N, M;
        cin >> N >> M;

        if (N % M == 0) {
            int candiesPerFriend = N / M;
            if (candiesPerFriend % 2 == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
