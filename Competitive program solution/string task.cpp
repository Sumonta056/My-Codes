#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n;
    n=s.length();

    for(int i = 0 ; i<n ; i++ )
    {
        char c;
        c=tolower(s[i]);
          if(  c !='a' && c!='e' && c!='i' && c!='o' && c!= 'u' && c != 'y' )

         cout<<"."<<c;

    }
}
