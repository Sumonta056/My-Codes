#include<iostream>
using namespace std;
int main()
{
   long long int n,sum,i;
    cin>>n;
  sum=0;


       if(n%2==0) sum=n/2;
       else if(n%2!=0) sum=((n-1)/2)-n;



   cout<<sum;
}
