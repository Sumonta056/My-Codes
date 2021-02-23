#include<iostream>
using namespace std;
int main()
{
   long  int  t;
    cin>>t;
    for(long int i =1 ; i<=t ; i++)
    {
        long int n,x,y;
        cin>>n>>x>>y;
        for( long int  j=x ; j<n ;j++)
        {
            if(j%x==0 && j%y!=0)
                cout<<j<<" ";
        }
    cout<<endl;
    }



}

