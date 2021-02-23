#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
 long int n,sum=0,x,y;
 cin>>n;
 string s1,s2;
 cin>>s1;
 cin>>s2;

 for(int i = 0 ; i<n ; i++)
 {
     x=abs(s1[i]-s2[i]);
     y=10-x;
     if(x>y)sum=sum+y;
     else sum=sum+x;
 }
cout<<sum;

}
