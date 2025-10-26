#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      double a,x,b,y;
      cin>>a>>x>>b>>y;
      double speed_alice=a/x;
      double speed_bob=b/y;
      if(speed_alice>speed_bob)
      {
          cout<<"alice"<<endl;
      }
      else if(speed_alice<speed_bob)
      {
          cout<<"bob"<<endl;
      }
      else
      {
          cout<<"equal"<<endl;
      }
  }
}
