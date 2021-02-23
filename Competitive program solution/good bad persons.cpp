#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =1 ; i<=t ; i++)
    {
        int n,k,x=0,y=0,l;
        cin>>n>>k;
        string s;
        cin>>s;

        for(int p =0 ; p<n ; p++)
        {
            if((isupper(s[p])))
            {
             y++;
            }
            else if((islower(s[p])))
            {
             x++;
            }
        }

       if(x==y)
       {
           if(k>=x) cout<<"both"<<endl;
           else cout<<"none"<<endl;
       }

       else if(x>y)
       {
           if(k>=x) cout<<"both"<<endl;
           else if( k<y)cout<<"none"<<endl;
           else cout<<"chef"<<endl;
       }
        else if(x<y)
       {
           if(k>=y) cout<<"both"<<endl;
           else if( k<x)cout<<"none"<<endl;
           else cout<<"brother"<<endl;
       }






    }
}
