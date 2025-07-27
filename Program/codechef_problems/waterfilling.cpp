#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int empty=0;
	    if(a==0)
	     empty++;
	     if(b==0)
	     empty++;
	     if(c==0)
	     empty++;
	     
	     if(empty>=2)
	     {
	         cout<<"Water filling time"<<endl;
	         
	     }
	     else
	     {
	         cout<<"Not now"<<endl;
	     }
	}

}
