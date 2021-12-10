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
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define limit 100000
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

int main()
{
    fast;

    ll n;
    cin >> n;

    list<ll> p1;
    list<ll> p2;

    ll k1 = 0, k2 = 0, x = 0;
    ll fight = 0;

    cin >> k1;
    for (ll i = 0; i < k1; i++)
        cin >> x, p1.push_back(x);

    cin >> k2;
    for (ll i = 0; i < k2; i++)
        cin >> x, p2.push_back(x);

    while (1)
    {
        if (p1.size() == 0)
        {
            cout << fight << " " << 2 << endl;
            break;
        }

        if (p2.size() == 0)
        {
            cout << fight << " " << 1 << endl;
            break;
        }

        ll p1_top = *p1.begin();
        ll p2_top = *p2.begin();

        if (p1_top > p2_top)
        {
            p1.pop_front();
            p2.pop_front();

            p1.push_back(p2_top);
            p1.push_back(p1_top);
        }

        else
        {
            p1.pop_front();
            p2.pop_front();

            p2.push_back(p1_top);
            p2.push_back(p2_top);
        }

        fight++;

        if (fight >= limit)
        {
            cout << -1 << endl;
            break;
        }
    }
}
