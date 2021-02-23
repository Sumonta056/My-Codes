#include<iostream>
#include<string>
#include<set>

using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>s ;


   for(int i =1 ; i<=n ; i++)
   {
      string k;
      cin>>k;
      s.insert(k);
   }
   cout<<s.size();



}

