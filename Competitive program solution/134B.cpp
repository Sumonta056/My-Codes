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

 ll x ;
 cin>>x;

 for(ll i = 0 ; i< x ; i++)
 {
     ll n ;
     cin >> n;

    // ans will be 1 if the number has more primes than 2 , (6/2 == 3)
 
     ll n2=0 , n3=0;

    // find how many two's in the number
    while( n%2 == 0) 
    {
        n = n / 2 ;
        n2++;
    }
    while( n%3 == 0) 
    {
        n = n / 3 ;
        n3++;
    }
     
    if(n == 1 && n3 >= n2 ) cout<<(2 * n3 - n2) <<endl;
    else  cout<<"-1"<<endl;

}






}