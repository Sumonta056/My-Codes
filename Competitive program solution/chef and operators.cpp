
#include<iostream>
using namespace std;
int main()
{
    int  t ;
    cin>>t;

    for(int i =1 ; i<=t ; i++)
    {
        int a,b;
        cin>>a>>b;

        if(a>b)
            cout<<">"<<endl;

         if(a<b)
            cout<<"<"<<endl;

        else cout<<"="<<endl;


    }
}


