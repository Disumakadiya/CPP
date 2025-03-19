#include <iostream>
#include <string.h>

using namespace std;
class Student
{
private:
    int roll_no;
    char name[20]; // string name;
public:
    Student() // constructor header
    // constructor declared inside the class
    {
        cout << "default constructor called" << endl; // default constructor
        roll_no = 0;
        strcpy(name, "default name"); // name="default name";
    }
    void putdata()
    {
        cout << "roll no is" << roll_no << endl cout << "name is " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.putdata();
}
