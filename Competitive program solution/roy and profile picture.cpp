#include<iostream>
using namespace std;

int main()
{
    int l,n;
    cin>>l;

    cin>>n;

    for(int i =1 ;i<=n ;i++)
    {
        int w,h;
        cin>>w>>h;
        if(w<l ||h<l)
            cout<<"UPLOAD ANOTHER"<<endl;
        else if(w>l && h>l)
            cout<<"CROP IT"<<endl;
        else if(w==l && h==l)
            cout<<"ACCEPTED"<<endl;
        else if(w==h)
            cout<<"ACCEPTED"<<endl;
    }
}
