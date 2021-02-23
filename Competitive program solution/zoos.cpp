#include<iostream>

#include<cstring>
using namespace std;

int main()
{
char a[20];
cin>>a;
int p=strlen(a);
int x=0, y=0,z;
for(int i =0 ; i<p ; i++)
{
    if(a[i]=='z')
    {  z=1;
        x=x+z;
    }
    else if( a[i]=='o')
    {
        z=1;
        y=y+z;
    }
}
if(2*x==y ) cout<<"Yes"<<endl;
else cout<<"No"<<endl;


}

