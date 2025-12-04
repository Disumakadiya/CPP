#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;   // taking sides as input

    if (a == b && b == c) {
        cout << "Equilateral";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles";
    }
    else {
        cout << "Scalene";
    }

    return 0;
}
