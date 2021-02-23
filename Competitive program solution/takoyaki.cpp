#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,t;
    cin>>n>>x>>t;

   double sum;
   sum=(double)n/x;
   int  p = ceil(sum);

   cout<<p*t;

}
