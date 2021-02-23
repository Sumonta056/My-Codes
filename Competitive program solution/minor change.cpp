#include<iostream>
using namespace std;
int main()
{
   string a,b;
   cin>>a>>b;

   long long int p,i,sum=0;

   p=a.length();
   for(i =0 ; i<p ; i++)
   {
       if(a[i]!=b[i]) sum++;
   }
   cout<<sum;
}

