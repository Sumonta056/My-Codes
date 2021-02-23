#include<iostream>
using namespace std ;
int main()
{
    int n , m;
    cin>>n>>m;

    int p = min(n,m);

    if(p%2==0) cout<<"Malvika";
    else cout<<"Akshat";
}
