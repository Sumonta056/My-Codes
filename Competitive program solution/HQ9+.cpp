#include<iostream>
#include<string>
using namespace std ;
int main()
{

    string s;
    getline(cin,s);
    int n;
    n=s.length();
    int x =1;
    for(int i =0 ; i<n ; i++)
    {
        if(s[i]=='H') x=0;
        if(s[i]=='Q') x=0;
        if(s[i]=='9') x=0;

    }
    if(x==0) cout<<"YES";
    else cout<<"NO";

}
