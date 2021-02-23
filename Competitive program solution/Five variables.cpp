#include<iostream>
using namespace std;
int main()
{
    int arr[5],p;


    for(int i=0 ; i<5 ;i++)
    {
        cin>>arr[i];
        if(arr[i]==0) p=i+1;
    }

    cout<<p;
}
