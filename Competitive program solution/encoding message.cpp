#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1 ; j<=t ; j++)
        {

    int n;
    cin>>n;
    string s;
    cin>>s;


    for(int i = 0 ; i<n ; i=i+2)
    {
        if(i==n-1)
        {
            if(i%2==0)
            {
                char c;
                c=s[i];
                int c1;
                c1=(int)c;
                c1=c1-96;
                c1=(27-c1)+96;
                s[i]=c1;
                 break;

            }
        }

        char a,b;
        a=s[i];
        b=s[i+1];
        int a1,b1,sum1,sum2;
        a1=(int)a;
        b1=(int)b;
        sum1=a1-96;
        sum2=b1-96;

        sum1=(27-sum1)+96;
        sum2=(27-sum2)+96;

        s[i]=sum2;
        s[i+1]=sum1;





    }

    cout<<s<<endl;
}
}
