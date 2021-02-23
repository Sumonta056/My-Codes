

#include<iostream>
#include<iomanip>
using  namespace std;

int main()
{
int x;
float y,ans;
  cin>>x>>y;
    cout<<fixed;
    cout<<setprecision(2);

  if( x%5==0 && x+.50<y )
  {
     ans=y-x-.50;

      cout<<ans<<endl;

  }
  else

    cout<<y<<endl;
}
