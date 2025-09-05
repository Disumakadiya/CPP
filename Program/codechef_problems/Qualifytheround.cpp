#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    int ans=a+b*2;
	   string final=(x<=ans) ?"Qualify":"NotQualify";
	  cout<<final<<endl;
	    
	}

}
