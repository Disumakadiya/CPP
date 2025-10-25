#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int floor_chef=(x-1)/10  + 1;
	    int floor_chefina=(y-1)/10 + 1;
	    
	   cout<<abs(floor_chef-floor_chefina)<<endl;
	}

}
