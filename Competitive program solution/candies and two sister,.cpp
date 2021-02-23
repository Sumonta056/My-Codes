#include<iostream>
using namespace std ;
int main()
{
    long long int t,i;
    cin>>t;
    for( i = 0 ; i<t ; i++)
    {
        long long int n;
        cin>>n;

        if(n%2==0)
        {
            cout<<(n/2)-1 <<endl;

        }

        else
        {
            cout<<(n-1)/2 <<endl;
        }
    }

}
