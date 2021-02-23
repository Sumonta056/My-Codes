#include<bits/stdc++.h>
using namespace std;

bool tprimes ( long long num)
{
    if(num<2) return false;

    if(num==2) return true;

    long long p = sqrt(num);

    if(p%2==0) return false;

    for(int j = 3 ; j<=p ; j=j+2)
    {
        if(p%j==0) return false;
    }

    return true ;
}

int main()
{
   int t ;
   cin>>t ;

   for(int i = 0 ; i<t  ; i++)
   {
       long long n;
       cin>>n;

       long long square= sqrt(n);

       if(square*square == n && tprimes(square)==true)
          cout<<"YES"<<endl;

      else
        cout<<"NO"<<endl;

   }
}
