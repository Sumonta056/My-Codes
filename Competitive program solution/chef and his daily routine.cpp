#include<iostream>
using namespace std;
int main()
{
   int t; cin>>t;

   for(int j  = 1 ; j <= t ; j++)



    {

        string s;
    cin>>s;

    long long int i=0 , sum=0 ,n;

    n=s.length();

    for(i=0; i<n-1 ; i++)
    {
        if(s[i]=='C')
        {
            if(s[i+1]=='C' || s[i+1]=='E' || s[i+1]=='S'   )
            {
                sum++;
            }
        }


        else if(s[i]=='E')
        {
            if(s[i+1]=='S' || s[i+1]=='E')
            {
                sum++;
            }
        }

        else if( s[i] == 'S')
        {
            if(s[i+1]=='S' ) sum++;
        }

       }


          if(sum==(n-1) ) cout<<"yes";
            else cout<<"no";

            cout <<endl;
    }



}


