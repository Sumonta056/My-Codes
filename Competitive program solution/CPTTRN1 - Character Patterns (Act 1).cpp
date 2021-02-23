
#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int p =1 ; p<=t ; p++)
    {
        int a,b;
        cin>>a>>b;
        for(int i=1 ; i<=a ; i++ )
        {
            for(int j=1 ; j<=b ; j++)
            {
                if(i%2!=0)
                {
                    if(j%2!=0) cout<<"*";
                    else cout<<".";
                }
                else
                {
                    if(j%2!=0) cout<<".";
                    else cout<<"*";
                }
            }
            cout<<endl;
        }


    }
}
