

#include<iostream>
using  namespace std;

int main()
{
  int  n,k;
  cin>>n>>k;
  int sum =0;
  for(int i =1 ; i<=n ; i++)
  {
      int t,b;
      cin>>t;
      if(t%k==0) b=1;
      else b=0;
      sum=sum+b;

  }
  cout<<sum;

}
