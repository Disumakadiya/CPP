#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int N;
    if (!(cin >> N)) return 0;
    long long cum1 = 0, cum2 = 0;
    int bestWinner = 1;
    long long bestLead = -1;
    
    for (int i = 0; i < N; ++i) {
        long long s, t;
        cin >> s >> t;
        cum1 += s;
        cum2 += t;
        long long lead = llabs(cum1 - cum2);
        int leader = (cum1 > cum2) ? 1 : 2;
        if (lead > bestLead) {
            bestLead = lead;
            bestWinner = leader;
        }
    }
    
    cout << bestWinner << " " << bestLead << '\n';
    return 0;
}
