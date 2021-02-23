#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
int n;
n=s.length();
  for(int i =n-2 ; i>=0 ; i--)
  {
      s[i]=tolower(s[i]);
      if(s[i]>='a' && s[i]<='z')
      {
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='y')
          {
            cout<<"YES";
            break;
          }
          else
          {
             cout<<"NO";
            break;
          }
      }
  }
}
