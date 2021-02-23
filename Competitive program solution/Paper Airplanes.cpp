#include<iostream>
#include<math.h>
using namespace std;

int main()

{
int k,n,s,p,x,t,multi;
    cin>>k>>n>>s>>p;

    x=ceil((double)n/s);

    multi=x*k;

    t=ceil((double)multi/p);
    cout<<t;
}
