#include<iostream>
using namespace std;
int main()
{
    char s[5];
    cin>>s;
    int a,b,c,d,m,n;
    a=(int)s[0]; a=a-48;
    b=(int)s[1]; b=b-48;
    c=(int)s[3]; c=c-48;
    d=(int)s[4]; d=d-48;
    m=a*10+b;
    n=c*10+d;

    double x,y;
    if(m>=12)
    {
        x=30*(m+((float)n/60));
        x=x-360;

    }
   else
   {
       x=30*(m+((float)n/60));
   }

    y=(360*n)/60;


    cout<<x<<" "<<y;


}

