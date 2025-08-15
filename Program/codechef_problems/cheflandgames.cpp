#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	   // int x,y,z,w;
	   // cin>>x>>y>>z>>w;
	   // if(x==0 && y==0 && z==0 && w==0)
	   // {
	   //     cout<<"IN"<<endl;
	   // }
	   // else
	   // {
	   //     cout<<"OUT"<<endl;
	   // }
	   int  d[4];
	   bool allinside=true;
	   for(int i=0;i<4;i++)
	   {
	       cin>>d[i];
	       if(d[i]!=0)
	       {
	           allinside=false;
	       }
		   

		   
	   }
	   cout<<(allinside?"IN":"OUT")<<endl;
	}

}
