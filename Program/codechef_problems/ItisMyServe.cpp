#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin>>T;
  while(T--)
  {
      int p,q;
      cin>>p>>q;
      int total_block=p+q;
      int block=total_block/2;
      if(block%2==0)
      {
          cout<<"alice"<<endl;
      }
      else
      {
          cout<<"bob"<<endl;
      }
  }
}
