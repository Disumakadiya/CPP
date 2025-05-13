// swap two private numbers
#include <iostream>
using namespace std;
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int b)
    {
        val2 = b;
    }
    void display()
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.indata(32);
    o2.indata(43);
    exchange(o1, o2);

    cout << "value of c1 after exchangeing becomes  ";
    o1.display();
    cout << "value of c2 after exchangeing becomes  ";
    o2.display();
    return 0;
}
// friend function declaration can be anywhere in private or public