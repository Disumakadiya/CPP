#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int marks[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>marks[i];
	    }
	    int cutoff=marks[0];
	    int pass=0;
	    for(int i=0;i<n;i++)
	    {
	        if(cutoff<=marks[i])
	        {
	            pass++;
	        }
	    }
	    cout<<pass<<endl;
	    
	}

}
