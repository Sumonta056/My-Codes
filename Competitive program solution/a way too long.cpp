#include<iostream>
#include<string>
using  namespace std;

int main()
{
   string w;
    int n;
    cin>>n;


    for(int i=1 ; i<=n; i++)
    {
         cin>>w;
    int r;
    r=w.size();
        if(r>10){
            cout<<w[0]<<r-2<<w[r-1]<<endl;
        }

       else cout<<w<<endl;
    }





}

