#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[5][5],a=0,b=0,c=0,d=0;
    for(int i=0 ; i<5 ;i++ )
    {
        for(int j=0 ; j<5 ; j++)
        {
            cin>>arr[i][j];

            if(arr[i][j]==1)
            {
                a=i+1;
                b=j+1;
            }
        }
    }

   c=abs(a-3);
   d=abs(b-3);
    cout<<c+d;
}
