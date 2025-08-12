#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
     vector<int>d(n);
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        cout<<(is_sorted(d.begin(),d.end())?"YES":"NO")<<endl;
    }

}
