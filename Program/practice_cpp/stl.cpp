#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
   vector <int> ar={1,2,3,4};
   vector<int> ::iterator ptr;
   cout<<"the elements of vector are ";
   for(ptr= ar.begin();ptr< ar.end();ptr++)
   {
    cout<<*ptr<<" ";
   }

     return 0;
}