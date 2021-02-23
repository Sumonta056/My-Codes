
#include<iostream>
using namespace std;
int main()

{
    int m,x=0,i=1;
    cin>>m;


    while(i<=m)
    {
            string a;
        cin>>a;

        if(a[0]=='+' || a[0]=='X' && a[1]=='+')
            x++;
        else if(a[0]=='-' || a[0]=='X' && a[1]=='-')
            x--;

            i++;
    }

    cout<<x;








}



