#include<bits/stdc++.h>
using namespace std;
int ribbon( int n , int a , int b , int c)
{
int dp[n+1];
dp[0]=0;

for(int i = 1 ; i<=n ; i++)
{
    int r1=INT_MIN,r2=INT_MIN,r3=INT_MIN;

    if(i>=a) r1=dp[i-a];
    if(i>=b) r2=dp[i-b];
    if(i>=c) r3=dp[i-c];

    dp[i]=1+max(r1, max(r2,r3));
}

return dp[n];
}


int main()
{
    int n , a , b ,c ;

    cin>>n>>a>>b>>c;

    cout<<ribbon(n,a,b,c)<<endl;
}

