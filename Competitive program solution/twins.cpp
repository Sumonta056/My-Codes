#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int n,y=0,x=0;
     cin>>n;
    int arr[n];

    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
        y=y+arr[i];
    }
    y=y/2;
    sort(arr, arr+n);
    int p = 0 ;
    for(int i = n-1 ; i>=0 ; i--)
    {
        x=x+arr[i];


        p++;
        if(x>y) break;
    }
    cout<<p;
}
