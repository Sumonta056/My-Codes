#include<iostream>

using namespace std;
int main()
{
    int n,x,y,a,b,sum=0;
    cin>>n;
    int arr[n]={0};
    cin>>x;
    for(int i =1 ; i<=x ; i++)
    {
        cin>>a;
        b=a-1;
        arr[b]=1;
    }
    cin>>y;
    for(int i =1 ; i<=y ; i++)
    {
        cin>>a;
         b=a-1;
        arr[b]=1;
    }


     for(int i =0 ; i<=n ; i++)
    {
        if(arr[i]==0)
        {
            sum=1;
            break;
        }
    }

    if(sum==0)

        cout<<"I become the guy.";
    else  cout<<"Oh, my keyboard!";


}


