#include<iostream>
using namespace std;

int main()
{
 string s;
 cin>>s;

 int n,sum=0;
 n=s.length();

 for(int i = 0 ; i<n ; )
 {
     if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
     {
         if(sum<1) i=i+3;
          else {
                  i=i+3;
                  cout<<" ";

               }
     }

     else
     {
         cout<<s[i];
         i=i+1;
         sum++;
     }
 }
}
