#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    p=n+1;
    int arr1[p], arr2[p];

    for(int i=1 ; i<=n ; i++)
    {
        cin>>arr1[i];
        int x;
        x=arr1[i];
        arr2[x]=i;
    }
     for(int i=1 ; i<=n ; i++)
    {
     cout<<arr2[i]<<" ";

    }
}
