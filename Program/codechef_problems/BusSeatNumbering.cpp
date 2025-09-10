#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    vector<string> SeatType(31);
    for(int i=1;i<=10;i++)
    {
        SeatType[i]="Lower Double";
    }
    for(int i=16;i<=25;i++)
    {
        SeatType[i]="Upper Double";
    }
    
    for(int i=11;i<=15;i++)
    {
        SeatType[i]="Lower Single";
    }
    for(int i=26;i<=30;i++)
    {
        SeatType[i]="Upper Single";
    }
    
    while(T--)
    {
        int N;
        cin>>N;
     cout<<SeatType[N]<<'\n';   
    }  
    return 0;
}
