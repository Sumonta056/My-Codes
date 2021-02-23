#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int  i =1 ; i<=t ; i++)
    {
        int n;
        cin>>n;
        int size=1000, fac[size],carry=0 ,j=size-1;
       fac[size-1]=1;//miss //it is 1 not 0
       while(n>1)
       {
           int x;
           for(int k=size -1 ; k>=j/*miss*/;k--)
           {
             x=fac[k]*n+carry;
             fac[k]=x%10;
             carry=x/10;
           }
           while(carry>0)
           {
               fac[--j]=carry%10;
               carry=carry/10;
           }
           n--;//misss
       }
       cout<<j<<endl;
       for(int p=j+3; p<size;p++) //miss
       {
           cout<<fac[p];
       }


    }

}
