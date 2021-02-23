#include <iostream>
#include<cmath>
using namespace std;

int main() {
int t,sum;

cin>>t;

for(int i =1 ; i<=t ; i++)
{
    int x,y,z;
    cin>>x>>y>>z;



   if(x>y && x<z || x<y && x>z) sum =x;

   else if(y>x && y<z || y<x && y>z) sum =y;

   else sum=z;

   cout<<"Case "<<i<<": "<<sum<<endl;



    }


}




