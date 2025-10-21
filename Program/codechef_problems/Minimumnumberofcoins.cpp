#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{ int x;
	cin>>x;
	    int possible=x%5;
	    if(possible==0)
	    {
	        int ten=x/10;
	        int rem=x%10;
	        if(rem==5)
	        {
	            cout<<ten + 1<<endl;
	        }
	        else
	        {
	            cout<<ten<<endl;
	        }
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
	
}
