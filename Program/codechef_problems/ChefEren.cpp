    #include <bits/stdc++.h>
using namespace std;

int main() {
    
int T;
cin>>T;
while(T--)
{
    int n,a,b;
    cin>>n>>a>>b;
    int odd=(n+1)/2;
    int even=n/2;
    int total_time=odd*b+even*a;
    
    cout<<total_time<<endl;
}
}
