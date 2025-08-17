#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    cin>>c>>d;
	    if(c>=a && d>=b)
	    {
	        cout<<"POSSIBLE"<<endl;
	    }
	    else
	    {
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}

}
