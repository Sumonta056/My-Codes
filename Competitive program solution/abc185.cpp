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

ll n , m ,t ;
cin>>n>>m>>t ;

ll z = 0 , x = n ;

for(ll i = 0 ; i<m ; i++)
{
   ll a , b ;
   cin>>a>>b ;

   if(a>=n && i == 0) 
   {
       cout<<"No"<<endl;
       return 0;
   }

   x = x - (a - z);
   if(x<0)  
   {
         cout<<"No"<<endl;
       return 0;
   }


   ll d ;
   d = b - a ;

   x=x+d ;
   if(x>n) x = n ;


   z = b;




}

ll p  = t  - z;
x = x - p;



if(x>0) cout<<"Yes";
else if(x<=0)cout<<"No";


}