
#include<iostream>
using  namespace std;

int main()
{
    long long int t,n,m;
    int d=0;
    cin>>n;
    m=n;
       while(m<=n)
        {

            if(m==1) d=1;
            for(int i = 2 ; i<m ; i++)
            {
                if(m%i==0)
                {
                    d=1;
                    break;
                }

            }
            m++;

        }


  if(d==0) cout<<"yes"<<endl;
  else cout<<"no"<<endl;
}



