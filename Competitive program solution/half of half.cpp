
#include<iostream>
#include<string>
using namespace std;
int main()

{
int t;
cin>>t;
for(int j=1 ;j<=t ;j++ )
{


string a;
cin>>a;
int b= a.size();

for(int i = 0 ; i<b/2 ;i=i+2)
{
    cout<<a[i];
}

cout<<endl;
}

}
