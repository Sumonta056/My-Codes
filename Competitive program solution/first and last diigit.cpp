

#include<iostream>
using  namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i =1 ; i<=t ; i++)
    {
        int n;

        cin>>n;
        int firstdigit, lastdigit,sum=0;
        lastdigit=n%10;

        while(n>=10)
        {
            n=n/10;
        }
        firstdigit=n;
        sum=firstdigit+lastdigit;
        cout<<sum<<endl;

    }

}
