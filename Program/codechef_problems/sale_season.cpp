#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int X;
        cin>>X;
        
        if(X<=100)
        {
            cout<<X<<endl;
        }
        else if(100<X && X<=1000)
        {
            cout<<X-25<<endl;
        }
        else if(1000<X&& X<=5000)
        {
            cout<<X-100<<endl;
        }
        else
        {
            cout<<X-500<<endl;
        }
    }
}
