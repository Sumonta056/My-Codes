#include<iostream>
using namespace std;
int main()
{
    string s;
    unsigned long long int n,sum=0;
    cin>>s;
    n=s.length();
    for(int i=0 ; i<n; i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
        sum=sum+1;
        }
    }
    if(sum==4  || sum==7 )cout<<"YES";
    else cout<<"NO";
}
