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

    int n,i,sum=0,a=0 ;
    cin>>n ;
    
    int holi[101]={0};

    for(i= 0 ; i<n ; i++)
    {
    	int p;
        cin>>p;

        holi[p]++;
    }

     for(i= 0 ; i<101 ; i++)
    {
    	if(holi[i]>0) sum=sum+(holi[i] / 2);
    }


cout<<sum;

}