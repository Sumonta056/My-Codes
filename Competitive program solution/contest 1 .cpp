// ** Sumonta Saha Mridul **
// SWE - SUST


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;

    int t ;
    cin>>t;

for(int  i = 0 ;i<t ; i++)
{
    int n , p;

    cin>>n>>p;

    int sum1 = 0 , sum2 = 0;


    for(int i = 1 ; i<=n ; i++)
    {
       int x; cin>>x;

       sum1=sum1+x;

       if(x>p) x=p;
       sum2=sum2+x;
    }


    cout<<sum1-sum2<<endl;
}



}