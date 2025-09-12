#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int total =((a>b)? a:b)+((c>d)?c:d);
	    cout<<total<<endl;
	}
}
