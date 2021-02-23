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


int m = 100007;
int pos[m];

int n;
cin>>n;

int arr[n];


for(int i = 0 ; i<n ;i++)
{
    cin>>arr[i];
    int k = arr[i];
    pos[k]= i+1 ;
}

int q;
cin>>q;

ll vasya = 0 , petya = 0;

for(int i = 0 ; i<q ;i++)
{
    int p ; cin>>p;

vasya=pos[p] + vasya;
petya=(n-pos[p])+1 + petya;

}

cout<<vasya<<" "<<petya;





}