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

int t ;
cin>>t ;

while(t--)
{
    ll n , x ;
    cin>>n>>x;

    vector<ll>arr1(n);

    ll mini = 1e10;
    ll index = 0 ;


    for(ll i = 0 ; i<n ;i++)
    {
        cin>>arr1[i] ;

        ll p = arr1[i];

        ll j = 0;

        while( p%x == 0)
        {
            p = p/x;
            j++;

        }

        if(j < mini)
        {
            index = i ;
            mini =j;

        }
    }
    
    ll sum = 0;
    mini = mini + 1 ;

    for(ll i = 0 ; i<n ; i++)
    {
        sum = sum + (mini * arr1[i]);

    }

    for(ll i = 0 ; i<index ; i++)
    {
        sum = sum + arr1[i];
        
    }

    cout<<sum<<endl;
}





}