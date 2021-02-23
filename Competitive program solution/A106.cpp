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

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll powmod(ll a,ll b,ll MOD){ll ans=1;while(b){if(b%2)ans=ans*a%MOD;a=a*a%MOD;b/=2;}return ans;}
int main()
{
   ll flag=0,res1,res2;
    cin>>n;
    for(int i=1;i<=37;i++)
    {
        for(int j=1;j<=25;j++)
        {
            if((powl(3,i)+powl(5,j))==n)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
 
}