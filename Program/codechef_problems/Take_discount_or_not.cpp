#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
         int original_sum=0;
        int discount_sum=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            original_sum+=a[i];
            
            if(a[i]>y)
             discount_sum+=(a[i]-y);
        }
        
        int total=x+discount_sum;
        if(total<original_sum){
        cout<<"COUPON"<<endl;
        }
        else {
        cout<<"NO COUPON"<<endl;}
       
     
    }

}
