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
#include <cstdlib>
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
{ 
    fast;

int t;
cin>>t;

for(int j = 0 ;  j < t ; j++)
{
    int n ; 
    cin>>n ;

    int arr[n];
    for(int i = 0 ; i<n ; i++) cin>>arr[i];

    sort(arr,arr+n);

    int result = arr[n - 1] - arr[0];

		for (int i = 0; i < n; i++) 
        {
			for (int j = i + 1; j < n; j++)
            {
				result = min(result, arr[j] - arr[i]);
			}
		}

        cout<<result<<endl;

}





}