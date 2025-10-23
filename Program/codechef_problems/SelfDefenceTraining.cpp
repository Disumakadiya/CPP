#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // number of test cases
    
    while (T--) {
        int N;
        cin >> N;  // number of women
        int count = 0;
        
        for (int i = 0; i < N; i++) {
            int age;
            cin >> age;
            if (age >= 10 && age <= 60) {
                count++;  // eligible for training
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
