#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(b >= a - y && b <= a + x)
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"no\n";
	    }
	}
}
    