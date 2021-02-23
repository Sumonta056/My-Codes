#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

   for(int i = 1 ; ; i++)

   {
     if(i%2!=0) c=c-b;
     else a=a-d;


    if(c<1)
    {
    cout<<"Yes";
    break;
    }

    else if (a<1){
            cout<<"No";
    break;
    }


   }
}
