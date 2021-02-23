

#include<bits/stdc++.h>
using namespace std;
int main()
{

    char x[20]; //unknown to you
    int k;
    scanf("%s %d",x,&k);
    for(int i=0; i<k; i++)
    {
        if(x[i]!='9')
        {
            x[i]='9';

        }
        else if(x[i]=='9')
        {
            //continue; //continue will give partially accepted as after getting 9 it will not increase
            k++; //k needs to be updated
        }
    }
    cout<<x<<endl;

    return 0;
}
