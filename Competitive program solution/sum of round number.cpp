#include<iostream>
#include<vector>
#include<iterator>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;

    for(int i  = 0 ; i< t ; i++)
    {
       int power=1,n;
       cin>>n;
       vector<int>k;
       vector<int>::iterator it;

       while(n>0)
       {
           if(n%10>0)
           {
               k.push_back((n%10)*power);


           }
           n=n/10;
           power=power*10;
       }
       cout<<k.size()<<endl;
       for(it = k.begin() ;it!=k.end();it++)
       {
           cout<<*it<<" ";
       }



    cout << endl;


    }
}
