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
 
ll n ;
cin >> n ;

if ( n >= 10) cout<< n <<endl;

else 
{
    ll ans ;
    ans = abs(n);

    if( ans%10 == 0 && ans < 100) cout <<"0" <<endl;

    else 
    {
        ll digit = floor(log10(ans) + 1);

        ll last ;
        last = ans % 10 ;

        ll lastb;
        lastb = (ans % 100) / 10 ;

        if(last >= lastb)
        {
            cout <<"-"<<ans/10<<endl;
        }

        else
        {
           ll p ;
           p =( (ans / 100) * 10  )+ last ;
           cout <<"-"<<p<<endl;
        }
        

    }
}



}