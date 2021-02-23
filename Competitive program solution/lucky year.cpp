#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  for(int i=x+1; ; i++)
  {
      int a=0,b=0,c=0,d=0,p;
      p=i;
      d=p%10;
      p=p/10;
    c=p%10;
    p=p/10;
    b=p%10;
    p=p/10;
    a=p%10;
      if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
      {
          cout<<i;
          break;
      }
  }
}

