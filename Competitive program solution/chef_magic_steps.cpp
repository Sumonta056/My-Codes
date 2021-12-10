//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back

#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define sll set<ll>
#define qll queue<ll>
#define stll stack<ll>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()

#define size(s) s.length()
#define alls(v) (v.begin, v.end)
#define rev(v) reverse(v.begin, v.end)
#define srt(v) sort(v.begin, v.end)

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define pv(v)             \
    for (ll i : v)        \
        cout << i << " "; \
    cout << endl;

#define cin(n) cin >> n
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define printE(str) cout << str << endl
#define print(str) cout << str << endl
#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"

#define no cout << "No\n"

#define sp " "
#define enter cout << endl;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

ll const N = int(1e7 + 3);
ll is_prime[N] = {0};

void sieve()
{
    is_prime[1] = 1;
    for (ll i = 2; i <= N; i++)
    {
        for (int j = 2; i * j <= N; j++)
        {
            is_prime[j * i] = 1;
        }
    }
}

ll prime_in_range[N];


void count_prime()
{
    prime_in_range[0] = 0;
    prime_in_range[1] = 0;
    prime_in_range[2] = 1;

    for (int i = 3; i <= N; i++)
    {
        if (is_prime[i] == 0) 
        {
            prime_in_range[i] = prime_in_range[i - 1] + 1;
        }
        else
        {
            prime_in_range[i] = prime_in_range[i - 1];
        }
    }
}

int main()
{
    fast;
    ll t;
    cin >> t;

    sieve();
    count_prime();

    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        ll step = 0;

        step = y - x - (prime_in_range[y] - prime_in_range[x+1]) ;

        // cout << prime_in_range[y] <<endl ;
        // cout << prime_in_range[x+1] <<endl ;
        

        cout << step << endl;
    }
}
