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

int t, n, x, arr[1001];

char c[1001];

 cin>>t;

 while(t--)
  {
  cin>>n;

  x=0;
  memset(arr, 0, sizeof(arr));

  cin>>c;

  for(int i=0; i<strlen(c); i++)
 {
   if(c[i]=='0' && i==0) arr[i]=0;
   else if(c[i]=='1' && i==0) arr[i]=arr[i+1]=1;
   else if(c[i]=='1' && i==n-1) arr[i-1]=arr[i]=1;
   else if(c[i]=='1') arr[i-1]=arr[i]=arr[i+1]=1;
 }
  for(int j=0; j<n; j++) 
    {
        if(arr[j]==0) x++;
    }
        
  cout<<x<<endl;

 }
 

}