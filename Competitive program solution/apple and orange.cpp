#include<iostream>
using namespace std;
int main()
{
    long int s,t,a,b,m,n,i,d,apple=0,orange=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    for(i = 0 ; i<m ; i++)
    {
        cin>>d;
        d=d+a;
        if(d>=s && d<=t) apple++;
    }

      for(i = 0 ; i<n ; i++)
    {
        cin>>d;
        d=d+b;
        if(d>=s && d<=t) orange++;
    }

    cout<<apple<<endl<<orange;
}
