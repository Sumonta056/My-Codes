#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double arr[n] ,sum=0;
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];

    }

    cout<<fixed;
    cout<<setprecision(12);

    cout<<sum/n;

}

