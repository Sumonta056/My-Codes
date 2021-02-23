#include <iostream>
using namespace std;
int main()
{   int p ,x ,v;
    cin >>p>>x;
    for(int j = p ; j<=50; j++)
    { int n,d=0,d1;
        n=j;
        for(int i = 2 ; i<n; i++)
        {
            if (n%i!=0) d1=0;
            if(n%i==0) d1=1;
            d=d+d1;
        }
        if(d==0)
        {
            if(n>p)
            {v=n;
                break;
            }
        }
}
    if(v==x) cout<<"YES";
    else cout<<"NO";
}
