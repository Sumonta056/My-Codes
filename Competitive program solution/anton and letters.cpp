#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int n,sum=0;
    n=s.length();
    int arr1[26]={0};
    for(int i=0 ; i<n ;i++)
    {
        if(s[i]>='a' && s[i]<='z')
      {
        char k ;
        k = s[i];
        int p;
        p =(int)k;
        p=p-97;

        arr1[p]++;
      }


    }
      for(int j=0 ; j<26 ;j++)
      {
          if(arr1[j]>=1)
          {sum++;
          }
      }
      cout<<sum;



}
