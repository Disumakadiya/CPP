#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s,t;
        cin >> s >> t;
       string word;
       cin>>word;
       if(word[s-1]==word[t-1]){
           cout<<"G"<<endl;
       }
       else{
           cout<<"B"<<endl;
       }

    }
}
