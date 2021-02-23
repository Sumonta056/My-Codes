#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char cake[n][n] ;

    int happy = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            cin>>cake[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            if(cake[i][j]=='C')
            {
                for(int p = i+1  ; p<n ; p++)
                {
                    if(cake[p][j]=='C') happy++;
                }
                for(int p = j+1  ; p<n ; p++)
                {
                    if(cake[i][p]=='C') happy++;
                }
            }
        }
    }

    cout<<happy;
}
