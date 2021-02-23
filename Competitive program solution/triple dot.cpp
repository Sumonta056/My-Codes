#include<iostream>
using namespace std;
int main()
{
    int k,S;
    cin>>k;

   string s;
   cin>>s;

   S=s.length();

   for(int i = 0 ; i<S ; i++)
   {
       cout<<s[i];
       if(i>=k-1)
       {
          if(k==S) break;

           else {
                cout<<"..." ;
           break;
           }
       }


   }



}
