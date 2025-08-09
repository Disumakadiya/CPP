#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    int power=a*b;
	    int h=x*y;
	    
	    if(h>=power)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}

}
