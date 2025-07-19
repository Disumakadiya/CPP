#include <iostream>
using namespace std;

class Math
{
public:
    // overloaded functions same name diff para..
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Math obj;
    cout << obj.add(5, 3) << endl;
    cout << obj.add(2.5, 3.5) << endl;
    cout << obj.add(1, 2, 3);
}