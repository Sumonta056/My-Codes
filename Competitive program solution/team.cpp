#include<iostream>
using namespace std;
int main()

{
int n,sum,ans=0;
cin>>n;
int arr[n][3];
for(int i = 0 ; i< n ; i++)
{

    for(int j =0 ; j<3 ; j++)
    {
        cin>>arr[i][j];
    }

}
for(int i = 0 ; i< n ; i++)
{
    sum=0;
    for(int j =0 ; j<3 ; j++)
    {
        if(arr[i][j]==1) sum=sum+1;
        else sum=sum+0;
    }
    if(sum>=2) ans=ans+1;
    else ans=ans+0;
}
cout<<ans;


}


