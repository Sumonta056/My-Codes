#include<iostream>
using namespace std ;
int main()
{
   int t;
   cin>>t;

   for(int i = 1 ; i<=t ; i++)
   {
       int n;
       cin>>n;

       if(n%8==0) cout<<n-1<<"SL";
       else if(n%8==7) cout<<n+1<<"SU";

       else if(n%8==1) cout<<n+3<<"LB";
       else if(n%8==4)cout<<n-3<<"LB";


       else if(n%8==2) cout<<n+3<<"MB";
       else if(n%8==5) cout<<n-3<<"MB";

       else if(n%8==3) cout<<n+3<<"UB";
       else cout<<n-3<<"UB";

       cout<<endl;

   }
}
