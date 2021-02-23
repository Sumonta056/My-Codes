#include<iostream>
using namespace std;
int main()
{
   long long int x,y,n,p,sum=0,t,i=0,j=0;
   cin>>t;

   for(i=1 ; i<= t ; i++)
   {
       cin>>x>>y>>n;
       for(j=n ;j>=0 ; j--)
       {
           p=j%x;
           if(p==y  ){
            sum=j;
            break;
           }
       }
       cout<<sum<<endl;
   }

}

