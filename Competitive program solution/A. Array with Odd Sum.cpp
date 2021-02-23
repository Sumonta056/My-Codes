#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t ; i++)
  {
      int n;
      cin>>n;
      int arr[n],odd=0,even=0;
      for(int i=0 ; i<n; i++)
      {
          cin>>arr[i];
          if(arr[i]%2==0) even++;
          else odd++;
      }
      if(odd== 0 || (even==0 && n%2==0)) cout<<"NO";
      else cout<<"YES";

      cout<<endl;


}

}
