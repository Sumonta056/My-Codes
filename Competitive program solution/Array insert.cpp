#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n,q,i,x,l,r,j,sum=0;
    cin>>n>>q;

    vector<int>arr(n) ;
    for(i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    for(i=0 ; i<q ; i++)
    {
        cin>>x;
        sum=0;
        if(x==1)
        {
            cin>>l>>r;

            arr[l]=r;
        }
        else
        {
            cin>>l>>r;
            for(j=l ; j<=r ; j++)
            {
                sum=sum+arr[j];
            }
            cout<<sum<<endl;

        }
    }

}
