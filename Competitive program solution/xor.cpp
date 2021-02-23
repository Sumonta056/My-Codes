
#include<iostream>
using namespace std;
int main()
{

    int p ,q;
    cin>>p>>q;
    if(p==0 && q==0) cout<<"0";
    else if(p==0 && q==1) cout<<"1";
    else if(p==1 && q==0) cout<<"1";
   else if(p==1 && q==1) cout<<"0";

}


