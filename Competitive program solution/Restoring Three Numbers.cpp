#include<iostream>
#include<algorithm>
using namespace std ;
int main()

{
    long long int a , b ,c;

    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

    sort(arr , arr+4);

    a=arr[3] - arr[0];
    b=arr[2] - a ;
    c = arr[3]- (a+b);

    cout<<a<<" "<<b<<" "<<c;

}
