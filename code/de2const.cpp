// much faster when initialize first in header section of constructor
#include <iostream>
#include <string.h>

using namespace std;
class Student
{
private:
    int roll_no;
    char name[20]; // string name
public:
    Student(); // declaration ma initialize ni jarur nathi
    void putdata();
};
Student::Student() : roll_no(0), name("default name")
// constructor header
// constructor declared outside the class
{
    cout << "default constructor called" << endl; // default constructor
}
void Student::putdata()
{
    cout << "roll no is " << roll_no << endl;
    cout << "name is " << name << endl;
}

int main()
{
    Student s1;
    s1.putdata();
}
