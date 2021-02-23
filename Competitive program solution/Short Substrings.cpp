#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        string s;
        cin>> s;
        int n ;
        n=s.length();
cout<<s[0];
        for(int j= 1 ; j<n ; )
        {
            if(s[j]!=s[j+1])
            {
                cout<<s[j];
                j++;
            }
            else if(j==n-1)
                  {
                cout<<s[j];
                j++;
            }
            else
            {
                cout<<s[j];
                j=j+2;
            }
        }
        cout<<endl;
    }
}
