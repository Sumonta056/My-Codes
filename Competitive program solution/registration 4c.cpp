#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> rega;
    for(int i = 0 ; i<n ; i++)
    {
        string s;
        cin>>s;
        if(rega[s]==0)
        {
            cout<<"OK"<<endl;
            rega[s]=1;


        }
        else
        {
            cout<<s<<rega[s]<<endl;
            rega[s]++;

        }

    }
}
