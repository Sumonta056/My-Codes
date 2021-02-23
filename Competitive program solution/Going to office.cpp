#include<iostream>
using namespace std;
int main()
{
    long long int d,oc,of,od,cs,cb,cm,cd,x,y;
    cin>>d;
    cin>>oc>>of>>od;
    cin>>cs>>cb>>cm>>cd;

   x=oc+(d-of)*od ;

   y=cb+ ((double)d/cs)*cm + d*cd ;

   if(x<y)   cout<<"Online Taxi";
        else  cout<<"Classic Taxi";

}
