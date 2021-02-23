#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
char a[100];
cin>>a;
int p=strlen(a);

for(int i =0 ; i<p ; i++)
{

if(islower(a[i]))
{
    a[i]=toupper(a[i]);
    cout<<a[i];
}
else{
   a[i]=tolower(a[i]);
    cout<<a[i];

}
}
}
