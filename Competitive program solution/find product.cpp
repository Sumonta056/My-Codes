
#include<iostream>

using namespace std;

int main()
{

int n;
cin>>n;

int a[n];
long int ans;
ans=1;

for(int i =0 ; i<n ;i++)
{
    cin>>a[i];

}
for(int i =0 ; i<n ;i++)
{
    ans=(ans*a[i])%1000000007;

}
cout<<ans<<endl;
}

