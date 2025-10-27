#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 4 == 0)
        N = N + 1; 
    else
        N = N - 1;  

    cout << N << endl; 
    return 0;
}
