#include<iostream>

using namespace std;

int main()
{
   long long int n,m,k,i=0,s,j=0,l=0,sum=0,o=0,z;
    cin>>n>>m>>k;
    s=m+n;
    int  a[n] , b[m];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];

    }
     for(i=0 ; i<m ; i++)
    {
        cin>>b[i];

    }

    for(z = 1 ;  ; z++)
    {


        if(z%2==0)

        {
            sum=sum+a[j];
            j++;
        }
        else
        {
            sum=sum+b[l];
            l++;
        }
         if(sum>=k)
        {
            if(z==1)o=0;
            else o=z;
            break;


        }


    }



    cout<<o;

}
