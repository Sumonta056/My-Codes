#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char t[150],a[150];
    cin>>t;
    cin>>a;
    int p,sum=0;
    p=strlen(t);


    for(int i=0 ; i<p ; i++)
    {
        if(t[i]!=a[p-i-1])
        {
           sum=1;
           break;
        }

    }
    if(sum==0) cout<<"YES"<<endl;
        else if(sum==1) cout<<"NO"<<endl;
    }


