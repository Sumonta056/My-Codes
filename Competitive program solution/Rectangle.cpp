#include<iostream>
using namespace std;
int main()
{
    int  t ;
    cin>>t;

    for(int i =1 ; i<=t ; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a==b && c==d || a==c && b==d || a==d && b==c)
            cout<<"YES"<<endl;

        else cout<<"NO"<<endl;


    }
}

