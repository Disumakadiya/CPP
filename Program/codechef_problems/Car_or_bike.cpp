#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int b,c;
        cin>>c>>b;
        if(b>c)
        {
            cout<<"BIKE"<<endl;
        }
        else if(c>b)
        {
            cout<<"CAR"<<endl;
        }
        else
        {
            cout<<"SAME"<<endl;
        }
    }
}
