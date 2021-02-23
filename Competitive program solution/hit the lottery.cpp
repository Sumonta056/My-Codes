#include <iostream>
#include<cmath>
using namespace std;

int main() {
 long long int n,i,sum=0;

 cin>>n;

 for(int i =n ; i>0 ; )

 {
     if(i>=100) i=i-100;
     else if(i>=20 && i<100) i=i-20;
      else if(i>=10 && i<20) i=i-10;
       else if(i>=5 && i<10) i=i-5;
       else i--;

       sum++;


 }

 cout<<sum;

}


