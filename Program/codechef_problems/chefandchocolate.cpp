#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;
     // Total money Chef has
        int total = (X * 5) + (Y * 10);
        
        // Max chocolates that can be bought
        int chocolates = total / Z;
        
        cout << chocolates << endl;
    }
	

}
