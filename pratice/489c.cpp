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

int m , s ;
cin >> m >> s ;

if (s == 0)
{
    if ( m == 1 ) 
    {
        cout<< "0 0"<<endl;
        return 0 ;
    }
    
    else 
    {
        cout << "-1 -1"<<endl;
        return 0 ;
    }

}

string maxi;

for ( int i = 0 ; i < m ; i++)
{
    int k = min(9 , s) ;
    
    maxi.push_back('0'+k);

    s = s - k ;
}

if( s > 0) 
{
    cout <<"-1 -1";
    return 0 ;
}


string mini;

for ( int i = m-1 ;  i>=0 ; i--)
{
    mini.push_back(maxi[i]) ;

}

int j = 0 ;

while(mini[j]=='0')
j=j+1;
    mini[0]++;
    mini[j]--;


cout << mini<<" "<<maxi<<endl;


}