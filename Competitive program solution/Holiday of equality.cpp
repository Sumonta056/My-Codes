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

    int n,i,sum=0,a=0 ;
    cin>>n ;
    
    int holi[n];

    for(i= 0 ; i<n ; i++)
    {
    	cin>>holi[i];

    	a= max(a, holi[i]);
    }

     for(i= 0 ; i<n ; i++)
    {
    	sum=sum+(a- holi[i]);
    }


cout<<sum;




}