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

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define pii         pair<int,int>
#define pll         pair<long,long>
#define mp(a,b)     make_pair(a,b)
#define vi          vector<int>
#define vll         vector<ll>
#define vii         vector<pii>
#define Mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define f           first
#define s           second
#define lb          lower_bound
#define ub          upper_bound
#define sz(x)       (int)x.size()
#define endl         '\n'

#define F(i,s,e)    for(ll i=s;i<e;++i)
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rem(i,a,b)  for(int i=a;i>b;i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  


#define mod   1000000007
#define INF   numeric_limits<ll>::max();
#define NINF  numeric_limits<ll>::min();
const int N = int(1e5 + 3);


int main()
{ 
    fast;
    int t ;
    cin >> t;

    while ( t-- )
    {
        int n , k1 , k2 ;
        int w , b;

        cin >> n >> k1 >> k2 ;
        cin >> w >> b ;

        int tw = k1 + k2 ;
        int tb = (2*n) - tw ;

        int a = 2*w;
        int c = 2*b;

        if( tw >= a && tb >= c ) cout<<"YES";
        else cout<<"NO";

        cout<<endl;



    
    }


}

/* 

! prime numbers
bool is_prime(int X)
{
	for(int i = 2; i*i < X; i++)
    {
		if(X % i == 0)
        {
			return false;
		}
	}
	return true;
}

! GCD 
int gcd(int a, int b)
{
	if(b == 0)
    {
		return a;
	}
	else
    {
		return gcd(b, a % b);
	}
}

*/
