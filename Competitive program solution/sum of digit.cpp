#include<iostream>
using namespace std;

int main()
{
   long long int n,t,temp;

    cin>>t;

    for(int i=  1 ; i<=t ; i++)
    {
int sum=0;
  cin>>n;
    temp=n;

    while(temp>0)
    {
         int r;
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    cout<<sum<<endl;
}
}
