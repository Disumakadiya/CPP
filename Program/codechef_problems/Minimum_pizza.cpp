#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    int pizza=ceil(((float)n*x)/4);
	    cout<<pizza<<endl;
	}

}
