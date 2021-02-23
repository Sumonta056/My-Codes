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

   
const int N = int(1e5 + 3);


int main()
{ 

vector < ll > arr(3);

cin >> arr[0] >> arr[1] >> arr[2];

ll ans = 0 ;

for(ll i = 1 ; i <= arr[0]  % 998244353  ; i++) 
 {
     for(ll j = 1 ; j <= arr[1]  % 998244353 ; j++) 
 {
     for(ll k = 1 ; k <= arr[2]  % 998244353; k++) 

 {    
       ll temp ;
      temp =  ( (i % 998244353) * (j % 998244353) ) % 998244353;
      ans = ans +( (  temp * (k % 998244353) ) % 998244353 );
      

 }
 }
 }

   cout<<ans;

}
