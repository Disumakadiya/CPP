//much faster when initialize first in header section of constructor
#include<iostream>
#include<string.h>

using namespace std;
class Student
{
private:
    int roll_no;
    //char name[20];
    string name;//string name;
public:
    Student():roll_no(0),name("default name")
    //constructor header
    //constructor declared inside the class
    {
        cout<<"default constructor called"<<endl;//default constructor

    }
    Student(int r,/*char name[]*/string n):roll_no(r),name(n)
    {
        cout<<"parametrized default constructor called"<<endl;//parametrized constructor

    }
    //copy constructor with pass an object by reference
    Student(Student &s):roll_no(s.roll_no),name(s.name)
    {
       // roll_no=s.roll_no;
        //name=s.name;//strcpy(name,s.name);
    }
    void putdata()
    {
        cout<<"roll no is "<<roll_no<<endl;
        cout<<"name is "<<name<<endl;
    }

};

int main()
{
    Student s1;
    s1.putdata();

    int r;
    string n;
    cout<<"enter rollno ";
    cin>>r;
    cout<<"enter name ";
    cin>>n;

    Student s2(r,n);//Student s2(24,"disu");

    s2.putdata();

    Student s3(s2);//copy of s2
    s3.putdata();
}
//if default constructor is not used and object is created as default then error will be givem but if object not created then no need to write default
//this pointer is inbuilt pointer  that current invoking object the argument are same as data members
