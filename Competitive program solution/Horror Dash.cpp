#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int t,sum;

cin>>t;

for(int i =1 ; i<=t ; i++)
{
    int n;
    cin>>n;
    int arr[n];

    for(int j=0 ; j<n ; j++)
    {
        cin>>arr[j];
    }

    sort(arr, arr+n);

   cout<<"Case "<<i<<": "<<arr[n-1]<<endl;



    }


}





