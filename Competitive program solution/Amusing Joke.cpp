#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3;


    cin>>s1>>s2>>s3;
    int arr1[26]={0};
    int arr2[26]={0};
    int sum=0;
    for(int i= 0 ; i<s1.length() ; i++)
    {
        char k;
        k=s1[i];
        int n;
        n=(int)k;
        n=n-65;
        arr1[n]++;
    }
    for(int i= 0 ; i<s2.length() ; i++)
    {
        char k;
        k=s2[i];
        int n;
        n=(int)k;
        n=n-65;
        arr1[n]++;
    }
    for(int i= 0 ; i<s3.length() ; i++)
    {
        char k;
        k=s3[i];
        int n;
        n=(int)k;
        n=n-65;
        arr2[n]++;
    }
    for(int i= 0 ; i<26 ; i++)
    {
       if(arr1[i]!=arr2[i])
       {
           sum=1;
           break;
       }
    }
    if(sum==1) cout<<"NO";
    else cout<<"YES";
}
