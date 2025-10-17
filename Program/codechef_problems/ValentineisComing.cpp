#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(y>x)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<(x/y)<<endl;
	    }
	}

}
