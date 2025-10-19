#include <bits/stdc++.h>
using namespace std;

int main() {
   int T;
   cin>>T;
   while(T--)
   {
       long long w,x,y,z;
       cin>>w>>x>>y>>z;
       bool answer=false;
       if(w==x||w==y||w==z) answer=true;
       if(w==x + y || w == x + z || w == y + z)  answer=true;
       if(w==x+y+z)  answer=true;
       
       cout<<(answer?"yes":"no")<<endl;
   }
}
