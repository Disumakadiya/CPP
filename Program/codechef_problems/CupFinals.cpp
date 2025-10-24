#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int T;
  cin>>T;
  while(T--)
  {
      int x,y,d;
      cin>>x>>y>>d;
      int skill_diff=abs(x-y);
      if(skill_diff>d)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
  }

}
