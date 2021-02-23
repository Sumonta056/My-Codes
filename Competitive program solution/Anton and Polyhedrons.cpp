#include<iostream>
using namespace std;
int main()
{
   long int n,i,sum=0;
   cin>>n;
   for(i= 0 ; i<n ; i++)
   {
       string s;
       cin>>s;

       if(s=="Tetrahedron") sum=sum+4;
       else if(s=="Cube") sum=sum+6;
        else if(s=="Octahedron") sum=sum+8;

         else if(s=="Dodecahedron") sum=sum+12;

         else if(s=="Icosahedron") sum=sum+20;


   }
   cout<<sum;
}
