#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for( int i =1 ; i<=t ;i++)
    {
       string p;
    cin>>p;
    long long int l,sum=0;
    l=p.length();
    for(int i=0;i<l;i++)
    {
          char k;
          k=p[i];
          int x;
          x=(int)k;
          x=x-48;
                  sum=sum+x;
    }
    cout<<sum<<endl;
    }
}

