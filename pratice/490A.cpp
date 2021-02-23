// ** Sumonta Saha Mridul **
// SWE - SUST

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   



int main()
{
  
fast;

int n ;
cin>>n ;

int t1 = 0 , t2 = 0 , t3 = 0 ;

int x1 = 0 , x2 =0 , x3 = 0 ;

int arr1[5002] , arr2[5002] , arr3[5002] ;

for( int i = 1 ; i<=n  ; i++ )
{
    int x ;  cin>> x ;

if( x == 1 ) 
{
    t1++;
    
    arr1[x1]= i ;
    x1++;
}

if( x == 2 ) 
{
    t2++;
    
    arr2[x2]= i ;
    x2++;
}

if( x == 3 ) 
{
    t3++;
    
    arr3[x3]= i ;
    x3++;
}


}

int w = 0 ;
w = min( t1 , min( t2 , t3 ) ) ;
cout<< w << endl;

if(w>0) 
{
    for(int i = 0 ; i<w ; i++)
    {
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl ;
    }
}
}