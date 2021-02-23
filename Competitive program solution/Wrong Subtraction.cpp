#include<iostream>
using  namespace std;
int main()
{
long long int n ,k,x;
cin>>n>>k;

for(int i=1 ; i<=k ; i++)
{
    x=n%10;

    if(x==0) n=n/10;
    else n=n-1;
}
cout<<n;
}

