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
   



int main()
{
fast;

int n ;
cin>>n;

int totalf = 0 ;
int p ;
int ans = 0;

for(int i = 0 ; i<n ; i++)
{
    cin>>p;
    totalf=totalf+p;
}
n=n+1;
for(int i = 1 ; i<=5 ;i++)
{
    if((totalf+i)%n != 1   )
    {
        ans++;
    }
}

cout<<ans;







}