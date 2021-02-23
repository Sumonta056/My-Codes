

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int  t ;
    cin>>t;

    for(int i =1 ; i<=t ; i++)
    {
      double a,b;
        cin>>a>>b;
         cout<<fixed;
    cout<<setprecision(6);


        if(a<1000){

            cout<<a*b<<endl;
        }


        else cout<<(a*b*90)/100<<endl;


    }
}


