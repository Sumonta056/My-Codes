#include<iostream>
using namespace std;
int main()
{
  int x,y;
cin>>x>>y;
int p;
p=y;

for(int i=x ; i>0 ;i--)
{

    if(p<=4) p=p-2;
    else p=p-4;


}

if(p==0)cout<<"Yes";
else cout<<"No";
}

