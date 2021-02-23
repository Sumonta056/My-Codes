#include<iostream>
using namespace std ;
int main()
{
   long int t,i;
   cin>>t;

   for( i = 1 ; i<=t ; i++)
   {
       int n;
       cin>>n;

       if(n%12==0) cout<<n-11<<" "<< "WS";
       else if(n%12==1) cout<<n+11<< " "<<"WS";

       else if(n%12==2) cout<<n+9<<" "<<"MS";
       else if(n%12==11)cout<<n-9<<" "<<"MS";



       else if(n%12==3) cout<<n+7<<" "<<"AS";
       else if(n%12==10) cout<<n-7<<" "<<"AS";

       else if(n%12==6) cout<<n+1<<" "<< "WS";
       else if(n%12==7) cout<<n-1<< " "<<"WS";

        else if(n%12==5) cout<<n+3<<" "<<"MS";
       else if(n%12==8)cout<<n-3<<" "<<"MS";

       else if(n%12==4) cout<<n+5<<" "<<"AS";
       else cout<<n-5<<" "<<"MS";

       cout<<endl;

   }
}



