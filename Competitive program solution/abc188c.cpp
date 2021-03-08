//        ** Sumonta Saha Mridul **                                    SWE - SUST 
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;


#define F(i,s,e) for(ll i=s;i<e;++i)
#define ll long long
#define pb push_back
using vll = vector<ll>;
#define P(str) cout << str << endl
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   
const int N = int(1e5 + 3);


int main()
{ fast;

int n ;
cin>>n ;

int size = pow(2 ,n );

ll high = 0 , low = 0 , hindex = 0 , lindex = 0 ;

for( int i = 1 ; i <= size; i++)
{
    ll x ;
    cin>>x;
    
    if ( i <= size/2 )
     {
         if(x > high)
         {
         high = max( high , x);
         hindex = i ;
         }
     }

     else
     {
         if(x > low )
         {
         low = max( low , x );
         lindex = i;
         }
     }
     
}

if ( high > low ) cout<<lindex ;
else cout<<hindex ;






}