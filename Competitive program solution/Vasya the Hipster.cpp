#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;

    cin>>a>>b;

    int x = min(a,b);
    int p;

    if(a>b) p= (a-b)/2;
    else if(b>a) p = (b-a)/2;
    else p=0;

    cout<<x<<" "<<p;
}
