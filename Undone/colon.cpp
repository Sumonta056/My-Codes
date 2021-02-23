#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 double a,b,h,m;

    cin>>a>>b>>h>>m;
    double hour_angle = 0.5 * (h * 60 + m);
    double minute_angle = 6 * m;

    double angle = abs(hour_angle - minute_angle);





    double result;
    result=sqrt(a*a + b*b - (2*a*b*cos((angle*M_PI)/180)));


   cout<<setprecision(10);
   cout<<result;
   cout<<endl;
  cout<<"4.56425719433005567605";
}
