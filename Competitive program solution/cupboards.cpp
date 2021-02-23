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

int t = 0 , l0 = 0 , l1 = 0 , r0 = 0 , r1  =0;

for(int i = 1 ; i<=n ; i++)
{
    int a , b;
    cin>>a>>b;

    if(a==0) l0++;
    if(a==1) l1++;
    if(b==1) r1++;
    if(b==0) r0++;

}

t = min(l0 , l1) + min(r0 , r1) ;

cout<<t;




}