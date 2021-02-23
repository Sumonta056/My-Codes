#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;

    int n,sum=0;
    n=s.length();

    for(int i = 0 ; i<n ; i++)
    {
        if(s[i]!=t[i]) {
            sum=1;
            break;
        }
    }

    if(sum==1) cout<<"No";
            else cout<<"Yes";
}
