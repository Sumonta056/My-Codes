#include<bits/stdc++.h>
using namespace std;

int main()
{
 
  #ifndef online_judge
  freopen("input.txt" , "r" , stdin);
  freopen("output.txt" , "w" , stdout); 

   #endif

   
  string s;
  cin>>s;

  long long sum=0 , i;

  for(i=0 ; i<s.length() ; i++)
  {
      if(s[i]=='0') sum=sum+0;
    else if(s[i]=='1') sum=sum+1;
    else if(s[i]=='2') sum=sum+2;
    else if(s[i]=='3') sum=sum+3;
    else if(s[i]=='4') sum=sum+4;
    else if(s[i]=='5') sum=sum+5;
    else if(s[i]=='6') sum=sum+6;
    else if(s[i]=='7') sum=sum+7;
    else if(s[i]=='8') sum=sum+8;
    else if(s[i]=='9') sum=sum+9;
}
if(sum%9==0) cout<<"Yes";
else cout<<"No";

}
