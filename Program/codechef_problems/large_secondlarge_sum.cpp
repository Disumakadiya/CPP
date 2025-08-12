#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
      sort(a.begin(),a.end());
      int large=a[n-1];
      int second_large=-1;
      
      for(int i=n-2;i>=0;i--)
      {
          if(a[i]!=large)
          {
              second_large=a[i];
              break;
          }
      }
      cout<<large+second_large<<endl;
    }
    return 0;
}
