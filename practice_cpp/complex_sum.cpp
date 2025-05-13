#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void getnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Friend function declaration
    friend complex sum(complex c1, complex c2);

    void print_no()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

// Friend function definition
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.getnumber((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    complex d1, d2, result;

    d1.getnumber(1, 4);
    d1.print_no();

    d2.getnumber(5, 8);
    d2.print_no();

    result = sum(d1, d2);
    result.print_no();

    return 0;
}
