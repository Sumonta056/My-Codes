#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1 ; k<=t ; k++  )
    {



    int n,p,sum=0;
    cin>>n;
    for(int i=1 ; i<=n; i++)
    {
        p=1;
        sum=sum+p;
        n=n-i;
    }
    cout<<sum<<endl;

}

}
