#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int p;
int police = 0 , crime = 0;

for(int i = 0 ; i<n ; i++)
{
    cin>>p;

    if(p== -1)
    {
        crime++;
        if(police>0)
        {
            crime--;
            police--;
        }
    }
    else police=police+p;


}
cout<<crime;


}

