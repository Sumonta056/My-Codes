#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[26]={0},sum=0;
    string s;
    cin>>s;
    for(int i=0 ; i<n ; i++)
    {
        char k;
        k=s[i];
        k=tolower(k);
        int x;
        x=(int)k;
        x=x-97;
        arr[x]=1;
    }
    for(int i=0 ; i<26 ; i++)
    {
        if(arr[i]==0)
        {
            sum=1;
            break;
        }
    }
    if(sum==0) cout<<"YES";
    else cout<<"NO";
}


