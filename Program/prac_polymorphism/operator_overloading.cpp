// operator overloading mate operator func.
// return_type operator<symbol>(argument)
//{define}
// binary operators
#include <iostream>
using namespace std;

/*class complex
{
private:
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // overloading + operator
    complex operator+(complex obj)
    {
        return complex(real + obj.real, imag + obj.imag);
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    complex c1(3, 4), c2(5, 5);
    complex c3 = c1 + c2;
    cout << "sum of complex numbers";
    c3.display();
    return 0;
}*/
// unary operators
class count
{
private:
    int value;

public:
    count(int v = 0) : value(v) {} // default constructor

    // overloading prefix ++
    void operator++()
    {
        ++value;
    }
    // overloading postfix ++
    void operator++(int)
    {
        value++;
    }
    void display() const
    {
        cout << "value" << value << endl;
    }
};

int main()
{
    count c1(4);

    cout << "initial";
    c1.display();

    ++c1;
    cout << "after prefix++";
    c1.display();

    c1++;
    cout << "after postfix";
    c1.display();
    return 0;
}