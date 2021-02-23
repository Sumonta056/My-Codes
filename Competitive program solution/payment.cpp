#include<iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;

    int sum=0;
  if(n%1000==0)
  {
      cout<<sum; }



  else{
    for(int i=1000 ; ; i=i+1000)
    {
        if(n<i)
        {
            sum=i-n;
            break;
        }
    }

    cout<<sum;
}
}
