
#include<iostream>
using namespace std;
int main()
{
string s;
cin>>s;
int n,p=0;
n=s.length();
n=(n-1)/2;

for(int i=0 ;i<n ; i++)
{
    if(s[i]!=s[n+i+1])
    {
        p=1;
        break;
    }
}
if(p==1) cout<<"No";
else cout<<"Yes";

}
