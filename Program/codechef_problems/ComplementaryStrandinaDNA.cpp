// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int T;
// 	cin>>T;
// 	while(T--)
// 	{
// 	    int N;
// 	    string S;
// 	    cin>>N>>S;
// 	    string result;
// 	    for(int i=0;i<S.size();i++)
// 	    {
// 	        char c=S[i];
	    
// 	        if(c=='A')
// 	        {
// 	            result+='T';
// 	        }
// 	        else if(c=='T')
// 	        	        {
// 	            result+='A';
// 	        }
// 	        else if(c=='C')
// 	        	        {
// 	            result+='G';
// 	        }
// 	        else if(c=='G')
// 	        	        {
// 	            result+='C';
// 	        }
	        
	        
// 	    }
// 	 cout<<result<<endl;
	    
// 	}

// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        string result(N, ' '); // Pre-allocate string
        for (int i = 0; i < N; ++i) {
            char c = S[i];
            switch (c) {
                case 'A': result[i] = 'T'; break;
                case 'T': result[i] = 'A'; break;
                case 'C': result[i] = 'G'; break;
                case 'G': result[i] = 'C'; break;
            }
        }
        cout << result << endl;
    }
    return 0;
}