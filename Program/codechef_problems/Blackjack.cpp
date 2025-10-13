#include <bits/stdc++.h>
using namespace std;

int main() {
   int T;
   cin>>T;
   while(T--)
   {
       int a,b;
       cin>>a>>b;
       int game_win=21-a-b;
       if(game_win<=10)
       {
           cout<<game_win<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
   }
}
