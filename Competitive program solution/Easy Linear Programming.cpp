#include<iostream>
using namespace std;
int main()
{
    long int a,b,c,k;
    cin>>a>>b>>c>>k;
    long int p,sum=0;
    p=a+b+c;

    for(long int i =1 ; i<=k ; i++)
    {
       if(i<=a) sum=sum+1;
       else if(i<=b+a && i>a) sum=sum+0 ;
       else sum=sum-1;
    }




    cout<<sum;

}
