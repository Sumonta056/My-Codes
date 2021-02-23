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

//universal array
typedef long long ln;
//  ln dp[100005]={0};
 // ln dp2[100005] ;    



int main()
{
    fast;

    long long n , i ,b;
    cin>>n;

    ln dp[100005]={0};
    ln dp2[100005] ;  

    for(i = 0 ; i<n ; i++)
    {
       cin>>b;

       dp[b]++;

    }

dp2[0]=0;
dp2[1]=dp[1];

for(i = 2 ; i<=100000 ; i++)
{
    dp2[i] = max ( dp2[i-1] , dp2[i-2] +( i * dp[i] ) );
}


cout<<dp2[100000];

}