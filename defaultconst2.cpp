#include <iostream>
#include <string.h>

using namespace std;
class Student
{
private:
    int roll_no;
    string name;

public:
    Student();

    void putdata();
};

// constructor declared outside the class
Student::Student() // constructor is called when object is declared
{
    cout << "default constructor called" << endl; // constructor not have return type
    roll_no = 0;
    name = "default name";
}
void Student::putdata()
{
    cout << "roll no is" << roll_no << endl;
    cout << "name is " << name << endl;
}

int main()
{
    Student s1;
    s1.putdata();
}
