#include <iostream>
#include <stdio.h>
using namespace std;
int main() {


    int t;
    cin>>t;


    int l , r ,a , sum;
    for(int i=0; i<t; i++) {

        sum = 0;

        cin>>l>>r;

        for(int i=l; i<=r; i++) {


            a = i%10;

            if( a==2 || a==3 || a==9 )
                {
                sum++;
                }
        }


        cout<<sum<<endl;
    }
}
