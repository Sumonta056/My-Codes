#include<iostream>
using namespace std;

int main()
{
   long long int n,temp,t;
    cin>>t;
    for(int i =1 ; i<=t ; i++)

    {


    cin>>n;
    int sum=0;
    temp=n;

    while(temp>0)
    {
         int r;
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    cout<<sum;
}
}
