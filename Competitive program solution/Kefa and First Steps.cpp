#include<iostream>
#include<vector>
using namespace std ;
int main()
{
   long long int n,i,sum=0,sum2=0;
   cin>>n;

   vector<long long int> arr(n);

   for(i=0 ; i<n ; i++)
   {
       cin>>arr[i];
   }
 for(i=0 ; i<n-1 ; i++)
   {
       if(arr[i+1] >= arr[i])
       {
           sum=sum+1;
           sum2=max(sum , sum2);
       }
       else sum=0;
   }

   cout<<sum2+1;
}
