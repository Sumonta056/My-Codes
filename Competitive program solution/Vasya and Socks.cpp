#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m ;
    cin>>n>>m;

    for(int i = 1 ;  ; i++)
    {
        if(i*m > n) break;
        else
        {
            n++;
        }

    }

    cout<<n;
}
