
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
for(int i =1 ; i<=t; i++)
{
    double n,sum;
    cin>>n;
    cout<<fixed;
    cout<<setprecision(2);

    if(n<1500)
    {
        sum=n*2;
        cout<<sum<<endl;
    }

    else{
        sum=500+n+(n*98)/100;
        cout<<sum<<endl;
    }
}

}
