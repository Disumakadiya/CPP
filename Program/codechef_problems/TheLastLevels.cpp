#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    long long total_time=x*y+(((x-1)/3)*z);
	    cout<<total_time<<endl;
	}

}
