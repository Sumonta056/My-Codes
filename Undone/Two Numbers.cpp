#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1 ; k<=t ; k++  )
    {
        int a,b,n;
        cin>>a>>b>>n;

        for(int i =1 ; i<=n ; i++)
        {
            if(i%2!=0)
            {

                a=a*2;

            }
            else
            {
                b=b*2;

            }
        }

        if(b>a)
        {
            cout<<b/a<<endl;
        }

        if(a>b)
        {
            cout<<a/b<<endl;
        }
        else if(a==b)
        {
            cout<<"1"<<endl;
        }

    }
}
