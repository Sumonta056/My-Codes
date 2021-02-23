
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int g=1 ; g<=t ; g++)
    {

    int arr1[26]={0};
    int arr2[26]={0};
    string s1,s2;
    cin>>s1>>s2;
    int p,r=0;
    p=s1.length();
    for(int i=0 ; i<p;i++)
    {
        int x;
        x=s1[i]-97;
        arr1[x]++;

         int y;
        y=s2[i]-97;
        arr2[y]++;
    }
    for(int i =0 ; i<26 ; i++)
    {

        if(arr1[i]!=arr2[i])
        {
            r=1;
            break;
        }

    }
    if(r==1) cout<<"NO";
    else cout<<"YES";

    cout<<endl;


}
}
