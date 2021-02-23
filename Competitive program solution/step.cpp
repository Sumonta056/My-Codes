#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n ,d ,t, sum ,h,i;
cin>>n;
h=0;
sum=0;
d=0;

for(i=0 ; i<n ;i++)
{
    cin>>t;
    if(h>t) {
            d=h-t;
            sum=sum+d;
            }

    h=max(h,t);


}
cout<<sum;
}
