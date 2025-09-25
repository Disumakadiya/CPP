#include <bits/stdc++.h>
using namespace std;

int main() {

int T;
cin>>T;
while(T--)
{
    int x,y,z;
    cin>>x>>y>>z;
    int t=y/x;
    int wait=z-t;
    if(wait<0)
    {
        wait =0;
    }
    cout<<wait<<endl;
    
}
}
