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

    
    int i=0,j=0;
	int A[5][5]={0};
	for(i=1;i<=3;i++)
	for(j=1;j<=3;j++)
	scanf("%d",&A[i][j]);
 
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	printf("%d",(A[i][j]+A[i][j-1]+A[i][j+1]+A[i-1][j]+A[i+1][j]+1)%2);
	printf("\n");
	}
}