#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k;
    cin>>n>>k;

    int time = 240 - k ;
    int p = 0 , solve=0 ;

    for(int i = 1 ; i<=n  ; i++)
    {
        p = p + (i*5);
        if(p<=time)
        {
               solve = i;

        }

    }
    cout<<solve;
}
