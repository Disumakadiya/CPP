#include<iostream>
using namespace std;
int main(){
    int a=40,b=20;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b<<endl;
    return 0;
}