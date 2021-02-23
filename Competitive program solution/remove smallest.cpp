#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int main()
{
    int t; cin>>t;

   for(int i = 0 ; i< t ; i++)
   {
       int n ; cin>>n ;
       int arr[n];

       int element=0,a;

       for(int j = 0 ; j<n ; j++)
       {
           cin>>arr[j];
       }
       sort(arr , arr+n);

       for(int j = 0 ; j<n-1 ; j++)
       {
           a=abs(arr[j]-arr[j+1]);

           if(a>1){
            element = 1;
            break;
           }
       }


       if(element == 1 ) cout<<"NO";
       else cout<<"YES";

       cout<<endl;

   }
}
