#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b = "hello" ;
    int n ;
    n=a.length();
    int j = 0 , sep=0;
    for(int i =0 ; i< n ; i++)
    {
        if(a[i]==b[j])
        {
            j++;
            sep++;
        }
    }

    if(sep==5) cout<<"YES";
    else cout<<"NO";

}
