
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1 ;i<=t ;i++)
    {


int n1,n2;
    cin>>n1>>n2;

 int rem;
 int a=n1, b=n2;
    while(n2>0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
cout<<n1<<" "<<(a*b)/n1<<endl;
}
}
