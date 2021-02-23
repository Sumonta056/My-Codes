#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
   cin>>s1;
   cin>>s2;
   int s,sum1=0,sum2=0;
   s=s1.length();
   for(int i =0 ; i<s; i++)
   {
       s1[i]=tolower(s1[i]);
         s2[i]=tolower(s2[i]);
   }

   if(s1<s2) cout<<"-1";
   else if(s1==s2) cout<<"0";
   else if(s1>s2) cout<<"1";
}
