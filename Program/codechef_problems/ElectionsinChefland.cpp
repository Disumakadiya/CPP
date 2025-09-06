#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n,age;
        cin>>n>>age;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin >> a[i];
        }
       int c = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= age) {
                c++;
            }
        }
        cout << c << endl;
    }
       
}      
    

