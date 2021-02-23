#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int upper=0;
    int n = s.length();

    for(int i = 1 ; i<n ; i++)
    {


     if(isupper(s[i])) upper++;

    }



    if( upper==n-1)
    {
         for(int i = 0 ; i<n ; i++)
    {
          if (islower(s[i]))
          {
          s[i]=toupper(s[i]);

          }
          else if (isupper(s[i]))
            {
          s[i]=tolower(s[i]);

          }

    }
}

    cout<<s;
}
