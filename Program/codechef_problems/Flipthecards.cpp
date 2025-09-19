#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;

    cin>>T;
    
    while(T--)
    {
        int n,x;
        cin>>n>>x;
        int ans=min(x,n-x);
        cout<<ans<<endl;
    }
}
