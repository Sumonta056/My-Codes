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
 
#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   
const double N = double(1e5 + 3);
 
 
int main()
{
fast;
    int n, m, cnt;
    double t, mx=0;
    cin >> n >> m;
 
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= mx)
        {
            cnt = i;
            mx = ceil(t / m);
        }
    }
 
    cout << cnt;
 
    return 0;
 
 
 
 
 
}