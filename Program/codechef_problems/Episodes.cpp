#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n>>k;
	    int t=n*k;
	    int hr=t/60;
	    int min=t % 60;
	    cout<<hr<<" "<<min<<endl;
	}

}
