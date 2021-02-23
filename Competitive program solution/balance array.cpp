#include<iostream>
using namespace std ;
int main()
{
    int t;
    cin>>t;

    for(int i = 0 ; i<t ; i++)
    {
        int n;
        cin>>n;


        if(n%4!=0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int m = 2 , k = 1;
            for(int j = 1 ; j<=n ; j++)
            {
                if(j<=n/2) {
                    cout<<m<<" ";
                    m=m+2;
                }
                else
                {
                    if(j==n) cout<<(n-1)+n/2;
                    else
                    {
                        cout<<k<<" ";
                        k=k+2;
                    }

                }
            }
            cout<<endl;
        }
    }
}
