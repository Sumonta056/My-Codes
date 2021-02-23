
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[26]={0};
    string s;
    cin>>s;
    int p,sum=0;
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
    for(int i =0 ; i<26 ; i++)
    {
        sum=sum+arr[i];
    }
    if(sum%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;


}
