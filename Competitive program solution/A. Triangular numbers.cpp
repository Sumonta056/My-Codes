
#include<iostream>

using namespace std;
int main()
{
int n,sum=0;
cin>>n;
for(int i=1 ; ;i++)
{
    int x;
    x=(i*(i+1))/2;

    if(x==n)
    {
        sum=1;
        break;

    }
    else if(x>n)
        break;
}

if(sum==1) cout<<"YES";
else cout<<"NO";
}
