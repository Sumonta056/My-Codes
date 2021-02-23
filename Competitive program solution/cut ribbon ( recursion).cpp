#include<bits/stdc++.h>
using namespace std;
int ribbon( int n , int a , int b , int c)
{
    if(n==0) return 0;         // base case

    if(n<0) return INT_MIN;   //  it will return the most lowest number in c++

    return 1+max(ribbon(n-a, a , b ,c) , max(ribbon(n-b, a , b ,c),ribbon(n-c, a , b ,c)));

    //adding 1 because It is guaranteed that at least one correct ribbon cutting exists

}


int main()
{
    int n , a , b ,c ;

    cin>>n>>a>>b>>c;

    cout<<ribbon(n,a,b,c)<<endl;
}
