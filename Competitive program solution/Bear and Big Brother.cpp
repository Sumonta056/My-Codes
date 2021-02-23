#include<iostream>
using  namespace std;
int main()
{
long long int a,b,n;
cin>>a>>b;

for(int i=1 ; ; i++)
{
    a=a*3;
    b=b*2;

  if(a>b)
  {
      n=i;
      break;
  }
}
cout<<n;
}


