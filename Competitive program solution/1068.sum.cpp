#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
if(1<n)
{
    for(int i =n ;i>=1;i--)
    {
        sum=sum+i;
    }
}


else
{
    for(int i =n ;i<=1;i++)
    {
        sum=sum+i;
    }
}

cout<<sum<<endl;
}
