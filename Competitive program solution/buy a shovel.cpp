#include <iostream>
#include<cmath>
using namespace std;

int main() {
int k,r,sum;

cin>>k>>r;

for(int i =1 ; ; i++)
{
    long int x,y;

    x=i*k;
    y=x%10;
    if(y==0  || y-r==0)
    {
        sum=i;
        break;
    }



    }
    cout<<sum;

}



