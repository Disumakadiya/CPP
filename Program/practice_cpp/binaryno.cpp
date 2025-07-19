#include<iostream>
using namespace std;

class binary
{
  string s;
  public:
  void read();
  void check_bin();
  void ones_compl();
  void display();
};

void binary::read()
{
    cout<<"enter the binary no.\n";
    cin>>s;
}

void binary::check_bin()
{
    for (int i = 0; i <s.length(); i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1'){
        cout<<"incorrect format"<<endl;
        exit(0);
        }
    }
}
void binary::ones_compl()
{
     for (int i = 0; i <s.length(); i++){
    if(s.at(i)=='0')
      s.at(i)='1';
    else
    s.at(i)='0';
     }
}
void binary::display()
{
    cout<<"display binary number";
    for (int i = 0; i <s.length(); i++)
    {
     cout<<s.at(i);    
    
    }
}


int main(){
  binary b;
  b.read();
  cout<<endl;
  b.check_bin();
  cout<<endl;
  b.display();
  cout<<endl;
  b.ones_compl();
  cout<<endl;
  b.display();
     return 0;
}