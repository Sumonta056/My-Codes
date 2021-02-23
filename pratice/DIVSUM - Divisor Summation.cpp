// ** Sumonta Saha Mridul **
// SWE - SUST


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll t,n,i,s=0;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        for(i=1; i*i<n; i++)
        {
            if(n%i==0)
                s=s+i+n/i;
        }
        if(i*i==n)
            s=s+i;
        s=s-n;
        cout<<s<<endl;
    }


}