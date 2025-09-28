#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int  n,x,k;
        cin>>n>>x>>k;
        int bottle=k/x;
        int result=min(n,bottle);
        cout<<result<<endl;
    }
}
