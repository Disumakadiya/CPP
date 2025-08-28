#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
// 	{ 
// 	    string N;
//         cin >> N;                  
//         reverse(N.begin(), N.end()); 
//         cout << stoi(N) << endl; 
	{
	    int n;
	    cin>>n;
	    int rev=0;
	    while(n>0)
	    {
	        rev=rev*10+ (n% 10);
	           n/= 10; 
	    }
	    cout<<rev<<endl;
	}

}
