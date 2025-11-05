#include <bits/stdc++.h>
using namespace std;

int main() {
 int T;
 cin>>T;
 while(T--)
 {
     int x,y,r;
     cin>>x>>y>>r;
     int extra_sticks=r/30;
     int total_sticks=extra_sticks+x;
     int plates=(total_sticks+y-1)/y;
     cout<<plates<<endl;
     
 }

}
