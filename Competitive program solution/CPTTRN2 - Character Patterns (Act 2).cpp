
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
               if(i==1 || i==a) cout<<"*";
               else
               {
                   if(j==1 || j==b) cout<<"*";
                   else cout<<".";
               }
            }
            cout<<endl;
        }


    }
}

