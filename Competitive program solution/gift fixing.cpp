#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    for(int i1 = 1 ; i1<=t ; i1++)
{
    long long n, minia = 1e18 , minib = 1e18,total = 0;
    cin>>n;
    // 1e18 means a number with 1 and 18 zero
    vector<long long>a(n);
    vector<long long>b(n);

    for(int i = 0 ; i< n ; i++)
    {
        cin>>a[i];
        minia=min(minia , a[i]);
    }
     for(int i = 0 ; i< n ; i++)
    {
        cin>>b[i];
        minib=min(minib , b[i]);
    }
     for(int i = 0 ; i< n ; i++)
    {
       long long d1 , d2 ;
       d1=a[i]-minia;
       d2=b[i]-minib;

       total = total + max(d1 , d2);
    }

    cout<<total<<endl;
}
}
