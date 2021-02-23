#include<iostream>
using namespace std;

int main()
{
  long long int n,t,temp,p,i;
  cin>>t;
  for(int k=1; k<=t ;k++)
{

  cin>>n;
int sum=0;
  temp=n;
  while(temp>0)
  {
      p=temp%10;
      if(p==4) i=1;
      else i=0;
      sum=sum+i;
      temp=temp/10;
  }
  cout<<sum<<endl;
}
}
