#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int p,x;
    p=s.length();
    x=(p+1)/2;
    int arr[x],j=0;
    for(int i=0 ; i<p ; i=i+2)
    {
    char k;
          k=s[i];
          int r;
          r=(int)k;
          r=r-48;
          arr[j]=r;
          j++;
    }
    sort(arr, arr+x);
    int y=0;
    for(int i=1 ; i<=p ;i++)
    {
        if(i%2==0) cout<<"+";
        else {
            cout<<arr[y];
            y++;
        }
    }
}
