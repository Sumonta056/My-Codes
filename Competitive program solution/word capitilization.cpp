#include<iostream>
#include<string>
using namespace std;
int main()

{
string a;
cin>>a;
int b= a.size();
a[0]=toupper(a[0]);

for(int i = 0 ; i<b ;i++)
{
    cout<<a[i];
}


}

