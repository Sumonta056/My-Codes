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
cin>> t ;
while(t--)
{
    ll n ;
    cin>>n;
    vector<ll>tr(n);

    for(ll i = 0 ; i < n ; i++)
    {
        cin>>tr[i];

    }

    set<ll>ans;

    for(ll i = 0 ; i < n ; i++)
    {
        for(ll j = i+1 ; j < n ; ++j)
    {
        ll p ;
        p = tr[j] - tr[i];
        ans.insert(p);

    }

    

    }

    cout<<ans.size()<<endl;

}





}