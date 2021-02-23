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

  ll t ; 
  cin >> t ;

  for ( ll p = 1 ; p<=t ; p++)
  {
      ll n ;
      cin>>n;
      
     ll x[n] , y[n] ;

      for(ll i = 0 ; i< n ; i++)
      {
          cin>>x[i]>>y[i] ;
      }

      ll distance = 0 , ans = 0 ;

       for(ll i = 0 ; i< n-1 ; i++)
      {
          for(ll j = i + 1 ; j< n ; j++)
        {
           distance = pow( (x[i] - x[j]) , 2) + pow( (y[i] - y[j]) , 2) ;

           ans = max( ans , distance);
        }
      }


      cout<<"Case "<<p<<": "<<ans<<endl;
    
  }




}