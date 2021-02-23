
#include<iostream>
#include<vector>
using namespace std ;
int main()
{
long int t ;
cin>>t;

for(int i = 0 ; i<t ; i++)
{
    long long int a , b;
    cin>>a>>b;

    long long int sum;
    sum=a%b;


    if(sum==0) sum==0;
        else sum=b-sum;

    cout<<sum<<endl;
}

}
