#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,c=0;
	    cin>>n;
	    int a[n];
	    for(int i =0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>=1000)
	    
	        c++;
	    }
	    cout<<c<<endl;;
	    
	}

}

