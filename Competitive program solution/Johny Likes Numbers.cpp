#include<iostream>
using namespace std;
int main()
         {
             long long int n,k,sum;
             cin>>n>>k;

             sum=n + (k-n%k);
             cout<<sum;

         }
