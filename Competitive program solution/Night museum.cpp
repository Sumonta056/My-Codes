#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int p,sum=0,h,j,h1,a,d,b;
    p= s.length();
    j=1;
    for(int i = 0 ; i< p ; i++)
    {
        char k;
        k=s[i];
        int x;
        x=(int)k;
        x=x-96;


        h1=x;

        a=min(j,x);
        b=max(j,x);

        d=min(a,b);
        d=d+26;
        int q,w;
        q=d-b;
        w=b-a;

        h=min(q,w);
        j=h1;
        sum=sum+h;

    }

    cout<<sum;
}
