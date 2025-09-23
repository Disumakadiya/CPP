
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int x;
	    cin>>x;
	    int r=x%3;
	    if(r==0)
	    {
	        cout<<"NORMAL"<<endl;
	    }
	    else if(r==1)
	     {
	        cout<<"HUGE"<<endl;
	    }
	    else
	    {
	        cout<<"SMALL"<<endl;
	    }
	}
}
