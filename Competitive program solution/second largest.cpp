#include<iostream>
using namespace std;
int main()
{
    int  t ;
    cin>>t;

    for(int i =1 ; i<=t ; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a>b && b>c || c>b && b>a) cout<<b<<endl;
        else if(b>a && a>c || c>a && a>b) cout<<a<<endl;
        else  cout <<c<<endl;
    }
}
