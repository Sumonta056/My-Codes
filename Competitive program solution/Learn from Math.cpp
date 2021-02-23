#include<iostream>
using namespace std ;
int prime( int k )
{
 int p;
   for(p = 2 ; p<k ;p++)
   {
       if(k%p==0)
       {
           return 1;
           break;
       }
   }
   return 0 ;
}

int main()
{
    long int n , a ,b;

    cin>>n;
    a=4;
    b=n-4;

    while(1)
    {
        int i = prime(a);
        int j = prime(b);

        if(i==1 && j==1)
            {
                cout<<a<<" "<<b;
                break;
            }

        a++;
        b--;
    }
}

