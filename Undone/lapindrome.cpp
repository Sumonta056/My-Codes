#include<iostream>

#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++)
    {
        char s[1000];
        cin>>s;
        int x;
        x = strlen(s);
        int p=0;

        if(x%2==0)
        {
            for(int i =0 ; i<(x/2) ; i++)
            {
                if(s[i]!=s[i+x/2]  )
                {
                    if(s[i+1]=s[i+x/2] || s[i-1]!=s[i+x/2])
                    {
                        continue;
                    }
                    p=1;
                    break;
                }
            }
        }

        else
        {
            for(int i =0 ; i<(x/2) ; i++)
            {
                if(s[i]!=s[i+(x/2+1)])
                {   if(s[i+1]=s[i+x/2+1] || s[i-1]!=s[i+x/2+1])
                    {
                        continue;
                    }
                    p=1;
                    break;
                }
            }
        }

  if(p==0 )cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

    }

}
