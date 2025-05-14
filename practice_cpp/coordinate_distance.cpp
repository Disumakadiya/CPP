#include<iostream>
#include<cmath>
using namespace std;

class point
{
     private:
     double a,b;
     public:
     point (int x=0.0,int y=0.0)
     {
        a=x;
        b=y;
     }
     void get_data()
     {
        cout<<"enter a and b coordinates in 2-D dimension system";
        cin>>a>>b;
     }
     friend double calculate_dist(const point& p1,const point& p2);
};

double calculate_dist(const point& p1,const point& p2)
{
    double dx=p1.a-p2.a;
    double dy=p1.b-p2.b;
     return sqrt(dx*dx + dy*dy);
}
int main()
{
point point_1,point_2;
cout<<"enter the 1st point";
point_1.get_data();
cout<<"enter the 2nd point";
point_2.get_data();

double distance=calculate_dist(point_1,point_2);
 cout<<"distance  between 2 points is::"<<distance<<endl;
     return 0;
}