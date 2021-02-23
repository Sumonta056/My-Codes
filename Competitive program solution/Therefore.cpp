#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int p;
    p=n%10;

    if(p==3) cout<<"bon";
    else if(p==0 || p==1  || p==6 || p==8) cout<<"pon";
    else cout<<"hon";
}
