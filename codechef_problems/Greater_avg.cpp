#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c;
	       cin>>a>>b>>c;
	    float avg=(a+b)/2.0;
	     if(avg>c)
	     {
	         cout<<"YES"<<endl;
	     }
	     else
	     {
	         cout<<"NO"<<endl;
	     }
	}
 return 0;
}
