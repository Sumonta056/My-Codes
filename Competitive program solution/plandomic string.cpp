#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 char s[100];
 cin>>s;
 int x;
 x = strlen(s);
  int p=0;
 for(int i =0 ; i<x ;i++)
 {
     if(s[i] != s[x-1-i])
     {
         p=1;
         break;
     }
 }
 if(p==0 ) cout<<"YES";
 else cout<<"NO";
}

