#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long n ,m;
    cin>>n>>m;

   long long time =0 , i,a=1;
   vector<int> x(m);

    for( i = 0 ; i<m ; i++)
    {
        cin>>x[i];

        if(x[i]>=a) time=time+(x[i]-a) ;
        else  time = time+((n-a)+x[i]) ;

        a=x[i];
    }
    cout<<time;
}
