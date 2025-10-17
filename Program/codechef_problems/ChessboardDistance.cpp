#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    while(T--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans1=abs(x1-x2);
        int ans2=abs(y1-y2);
        int total_dist=max(ans1,ans2);
        cout<<total_dist<<endl;
    }
}