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

   int n , t  , s;

   cin>> n >>t >>s;

 double p;
 p=(double)n / s;


 if(t>=p) cout<<"Yes" ;
 else cout<<"No";

}