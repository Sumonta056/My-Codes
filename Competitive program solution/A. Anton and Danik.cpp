#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  int n,x=0,y=0;
  cin>>n;
  cin>>s;

  for(int i =0 ; i<n ; i++)
  {
    if(s[i]=='A') x++;
    else if(s[i]=='D') y++;
  }
  if(x>y) cout<<"Anton";
  else if(x==y) cout<<"Friendship";
  else cout<<"Danik";
}

