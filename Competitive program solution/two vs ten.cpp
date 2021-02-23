#include<iostream>
using namespace std;
int main()
{
   int t; cin>>t;

   for(int j  = 1 ; j <= t ; j++)
   {

       long long int x,sum=0,i;
       cin>>x;
      if(x%5!=0) cout<<"-1"<<endl;
      else
      {
          for(i=x ; ; i=i*2)
          {
              if(i%10!=0 ) sum++;
              else if(i%10 == 0) break;
          }

          cout<<sum<<endl;
      }



    }
}


