#include<iostream>
#include<string.h>

using namespace std;
class Student
{
private:
    int roll_no;
    char name[20];//string name;
public:
    Student()//constructor header
    //constructor declared inside the class
    {
        cout<<"default constructor called"<<endl;//default constructor
        roll_no=0;
        strcpy(name,"default name");//name="default name";
    }

    Student (int r,char n[])//(int roll_no,char name[])----this pointer mate
    {
        cout<<"parameterized constructor is called"<<endl;
        roll_no=r;
        strcpy(name,n);//strcpy(this <-name,name)----this pointer mate
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

    Student s2(24,"disu");
    s2.putdata();
    Student s3(23,"naitri");
    s3.putdata();
}
