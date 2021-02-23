#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        int n ;
        cin>>n ;

        while(1)
        {
            int m= n ;
            bool good = 1;

            while(m>0)
            {
                if(good && m%3==2) good=0;
                m=m/3;
            }

            if(good)
            {
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }

}
