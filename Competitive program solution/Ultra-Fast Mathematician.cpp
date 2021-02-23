#include<iostream>
using namespace std;
int main()
{

   string a,b;
   cin>>a;
   cin>>b;
   long long int n;
   n=a.length();

    for(int i =0 ; i<n ; i++)
    {
        if(a[i]!=b[i]) cout<<"1";

        else cout<<"0";
    }

}

