#include<iostream>
using namespace std;
int main()
{
  int n ;
  cin>>n;

  int arr[5]={0};

  while(n--)
  {
      int t;
      cin>>t;
      arr[t]++;
  }

  int total;
  total=arr[4]+arr[3]+arr[2]/2;

  arr[1]=arr[1]-arr[3];

  if(arr[2]%2==1)
  {
      total++;
      arr[1]=arr[1]-2;

  }
  if(arr[1]>0)
  {
      total=total+(arr[1]+3)/4;
  }


  cout<<total;
}
