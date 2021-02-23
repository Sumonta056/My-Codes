#include<iostream>
using namespace std ;
int main()
{
    int n,same=0;
    cin>> n ;
    int arr[n][2];

    for(int i = 0 ; i< n ; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }

      for(int i = 0 ; i< n ; i++)
    {
          for(int j = i+1 ; j< n ; j++)
    {
      if(arr[i][0]==arr[j][1]) same++;
       if(arr[i][1]==arr[j][0]) same++;

    }

    }
    cout<<same;


}
