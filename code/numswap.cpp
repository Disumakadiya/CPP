#include <iostream>
using namespace std;
int main()
{
    int a = 40, b = 30;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << b;
    return 0;
}