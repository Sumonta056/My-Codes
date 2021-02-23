#include<iostream>
using namespace std ;
int main()
{

    int n ; cin>>n;
    int arr[n];
    int sum=0 ;
    int maxi ,mini;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    maxi=arr[0];
    mini=arr[0];
    for(int i = 1 ; i<n ; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            sum++;
        }

        else if(arr[i]<mini)
        {
            mini=arr[i];
            sum++;
        }
    }

    cout<<sum;

}
