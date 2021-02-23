#include<iostream>
using namespace std;
int main()
{
    int t,x,y,sum1=0,sum2=0;
    cin>>t;
    for(int k=0 ; k<t ; k++  )
    {
    int arr[t];
    cin>>arr[k];
    if(arr[k]%2==0)
    {
        x=1;
        sum1=sum1+x;
    }
    else
    {
        y=1;
        sum2=sum2+y;
    }

   }
if(sum1>sum2) cout<<"READY FOR BATTLE";
else cout<<"NOT READY";

}

