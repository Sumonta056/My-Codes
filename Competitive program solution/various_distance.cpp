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
   
const int N = int(1e5 + 3);


int main()
{
fast;
ll n ;
cin>>n;

ll p; 
ll m = 0  ;
ll  c = 0;
long double e2 = 0 , e1 = 0;

for(int i = 0 ; i<n ; i++)
{
    cin>>p;

    m = m + abs(p);

    e1 = e1 + ( abs(p) * abs(p) );

    c = max( c , abs(p) ) ;
}

e2 = sqrt(e1);
cout<<m<<endl;
cout<<fixed;
cout<<setprecision(15);
cout<<e2<<endl;
cout<<c<<endl;



}