#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int ans=n/4;
        
         cout << ((ans * 4 == n)?"Good":"Not Good") << endl;
    }
}
