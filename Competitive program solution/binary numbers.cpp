#include<iostream>
using namespace std;
int main()
{
   long int n,sum=0 , one = 0 ;
   cin>>n;

   long int binarynum = 0 , rem= 1 , i = 1;

   while (n!=0)
   {
       rem=n%2;

       n=n/2;

       binarynum=binarynum+(rem*i);

       i=i*10;

       if(rem==1)
       {

           sum++;
           one=max(sum,one);
       }
       else sum=0;
   }
   cout<<one<<endl;
   long long p = 1e18;
   cout<<p;

}
