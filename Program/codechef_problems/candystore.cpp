#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int left;
        if(y<x)
        {
            left=y;
        }
        else
        {
            left =(y-x)*2+x;
        }
        
        cout<<left<<endl;
    }
	

}
