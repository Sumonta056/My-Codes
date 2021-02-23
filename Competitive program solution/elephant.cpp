#include<iostream>
using namespace std;
int main()

{
    long int x,i,sum=0;
    cin>>x;

if(x<5){
    cout<<1;
}
else if(x%5==0)
        {
sum=x/5;
cout<<sum;
}
else if(x>5 && x%5!=0){
sum=(x/5)+1;
cout<<sum;
    }


}

