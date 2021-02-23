#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
int t ;
cin>>t;

for(int i =0 ; i<t ; i++)
{
    long long n,k,x,j;
    cin>>n;

    for(int j = 2 ; j<30 ; j++)
    {
       k=pow(2,j)-1;

       if(n%k==0)
       {
           x=n/k;
           break;
       }


    }
    cout<<x<<endl;
}
}
