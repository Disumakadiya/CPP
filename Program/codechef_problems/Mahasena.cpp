#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int odd=0,even=0;
	
	for(int i=0;i<n;i++)
	{
	    int w;
	    cin>>w;
	    if(w%2 ==0)
	    {even++;}
	    else
	    {odd++ ;}
	}
	if(even>odd)
	{
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else
	{
	    cout<<"NOT READY"<<endl;
	}

}
