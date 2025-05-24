#include<iostream>
using namespace std;
int main()
{
    int number,limit;
    cin>>number;
    cin>>limit;
    cout<<"multiplicative table"<<number<<"till"<<limit;
    for(int i=1;i<=limit;++i)
    {
         cout<<number<<" X "<<"="<<number*i<<endl;
    }
    return 0;
}