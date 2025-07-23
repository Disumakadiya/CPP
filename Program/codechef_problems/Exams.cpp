#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >>T;
	while(T--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int students=a*b;
	    if(c>students/2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}

}
