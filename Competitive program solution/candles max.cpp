#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main()
{
 long long int n,max=0 , c=1,i;
 cin>>n;
vector<long long int> arr(n);
for(i=0 ; i<n ; i++)
{
cin>>arr[i];
if(arr[i]>max) max=arr[i];
else if(arr[i]==max) c++;

}
cout<<c;

}
