#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n%2==0) cout<<n/2;

    else
    {
        int p;
        p=((n-1)/2)+1;

        cout<<p;
    }


}
