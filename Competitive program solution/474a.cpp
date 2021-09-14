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
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

int main()
{
    fast;

    char direction;
    cin >> direction;

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans, ans2;

    if (direction == 'R')
    {
        string input;
        cin >> input;
        //cout << input;

        for (int i = 0; i < input.length(); i++)
        {
            string ne;

            for (int j = 0; j < s.length(); j++)
            {
                if (input[i] == s[j])
                {
                    ne = s[j - 1];
                    //cout << ne << endl;
                }
            }

            if (i == 0)
                ans = ne;
            else
                ans = ans + ne;
        }

        cout << ans << endl;
    }

    else
    {
        string input;
        cin >> input;
        //cout << input;

        for (int i = 0; i < input.length(); i++)
        {
            string ne;

            for (int j = 0; j < s.length(); j++)
            {
                if (input[i] == s[j])
                {
                    ne = s[j +1];
                    //cout << ne << endl;
                }
            }

            if (i == 0)
                ans = ne;
            else
                ans = ans + ne;
        }

        cout << ans << endl;
    }
}
