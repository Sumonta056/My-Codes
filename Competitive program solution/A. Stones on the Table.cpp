#include<iostream>
using  namespace std;
int main()
{
   int n,x=0;
   cin>>n;
   string s;
   cin>>s;

   for(int i =0 ; i< n ; i++)
   {
       int p;
       p=i+1;
       if(s[i]==s[p]){

           x++;
       }
   }
   cout<<x;
}
