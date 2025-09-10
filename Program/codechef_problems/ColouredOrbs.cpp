#include <bits/stdc++.h>
using namespace std;

int main() {
	int r,b,g;
	cin>>r>>b;
 
 int green=min(r,b);
 g=green;
 int red=r-green;
 int blue=b-green;
	int skill=green*5+red +blue*2;
	
 cout<<skill<<endl;
}
