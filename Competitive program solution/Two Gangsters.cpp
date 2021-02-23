#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a+b<=10)
    cout<<10-a<<" "<<10-b;
     else
     {
       int c;
       c=a+b-10;
       cout<<b-c<<" "<<a-c;
     }

}


