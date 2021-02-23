#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[26]={0};
    string s;
    cin>>s;
    int p,t;
    p=s.length();
    for(int i=0 ; i<p;i++)
    {
        char k;
        k=s[i];
        int l;
        l=(int)k;
        l=l-97;
        arr[l]=1;
    }

    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        string w;
        cin>>w;
        int x,sum=0;
        x=w.length();
        for(int j =0; j<x; j++)
        {
            char c;
            c=w[j];
            int m;
            m=(int)c;
            m=m-97;
            if(arr[m]==0)
            {
                sum=1;
                break;
            }
        }
        if(sum>0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
