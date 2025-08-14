#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,x;
	    cin>>n>>x;
	    if(x>=n)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        int ans=n-x;
	        int a=ceil(ans/4.0);
	        cout<<a<<endl;
	    }
	 
	}

}
