#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y;
	    cin >>x>>y;
	    long long total_coins=x*y;
	    int bag=total_coins/100;
	    cout<<bag<<endl;
	}
}
