#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int d=y-x;
	    if(d<=0)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        int wins=(d+7)/8;
	        cout<<wins<<endl;
	    }
	}

}
