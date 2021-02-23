#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char s[100];
   cin>>s;
   int p,a=0,b=0,l;
   p=strlen(s);
   for(int i=0 ; i<p ;i++)
   {
       if(isupper(s[i]))
       {
           l=1;
           a=a+l;

       }
       else if(islower(s[i]))
       {
           l=1;
           b=b+l;

       }
   }
   if(a>b)
   {
       for(int i =0 ; i<p;i++)
       {
           s[i]=toupper(s[i]);
           cout<<s[i];
       }
   }
else
    {
     for(int i =0 ; i<p;i++)
       {
           s[i]=tolower(s[i]);
           cout<<s[i];
       }
   }
}

