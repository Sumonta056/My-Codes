#include<iostream>
using namespace std;
int main()
{
    long long int n , x , i ,j,sum=0;

    cin>>n>>x;
    for(i = 1 ; i<=n ;i++)
    {
       if(x%i!=0) continue;
        for(j = 1 ; j<=n ; j++)
        {

            if(i*j==x) sum++;
        }
    }
    cout<<sum;
}
