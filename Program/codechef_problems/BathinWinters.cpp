#include <bits/stdc++.h>
using namespace std;

int main() {
   int T;
   cin>>T;
   while(T--)
   {
       int x,y;
       cin>>x>>y;
       int person=y*2;
       int total=0;
       while(person<=x && person >0)
       {
           x=x-person;
           ++total;
       }
       cout<<total<<endl;
   }
}
