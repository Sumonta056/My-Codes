
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n,sum=0,x=0,y=0;
    n=s.length();

    for(int i = 0 ; i<n ; i++ )
    {
     if(s[i]=='0')
     {
         y=0;
         x++;
     }
     else if(s[i]=='1' )
     {
         x=0;
         y++;
     }
     if(x>=7 || y>=7)
     {
         sum=1;
         break;
     }

    }

    if(sum==0) cout<<"NO";
    else cout<<"YES";
}
