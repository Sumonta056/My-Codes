#include<iostream>

using namespace std;

int main()
{


long long int x,i,p,sum=0,j=0,k;

cin>>x;
for(i=1 ;i<=x ;i++)
{
    k=0;
    for(j=1 ; j<=i ; j++)
    {
        if(i%j==0) k++;
    }

    sum=sum+(i*k);
}
cout<<sum;
}

