//#include <iostream>
//using namespace std;
//
//
//void get_Numbers(int &a, int &b)
//{
//    cout << "Enter first number: ";
//    cin >> a;
//    cout << "Enter second number: ";
//    cin >> b;
//}
//
//int calculate_sum(int a, int b)
//{
//    return a + b;
//}
//
//int main()
// {
//    int n1, n2,sum;
//    get_Numbers(n1,n2);
//
//    sum = calculate_sum(n1,n2);
//    cout << "The final answer is: " << sum << endl;
//
//    return 0;
//}


#include<iostream>
using namespace std;

int recursion_sum(int a,int b,int c)

{
    if(b==0&&c==0)
    {
        return a;
    }
    else if(b>0)
    {
        return recursion_sum(a+1,b-1,c);
    }
    else
    {
        return recursion_sum(a+1,b,c-1);
    }
}
int main()
 {
    int num1, num2,num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
     cout << "Enter third number: ";
    cin >> num3;

    int sum =recursion_sum(int num1,int num,int num3)
    cout << "The answer is: " << sum << endl;

    return 0;
}
