#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        int p,q;
        cin>>p>>q;

        if(p<q && q-p>1) sum++;
    }
    cout<<sum;
}
