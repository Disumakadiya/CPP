#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int result;
	    if(m>=n)
	    {
	        result=n;
	    }
	    else
	    {
	        result=n*2-m;
	    }
	    cout<<result<<endl;
	}
}
