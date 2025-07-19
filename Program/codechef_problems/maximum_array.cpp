#include <bits/stdc++.h>
using namespace std;

int main() {
	
using namespace std;


   int T,N;
   cin>>T;
   while(T--)
   {
       cin>>N;
       int arr[100000];
       for(int i=0;i<N;i++)
       {
           cin>>arr[i];
       }
       int max_val = *max_element(arr, arr + N);
		cout << max_val << endl;
   }
   return 0;



}
