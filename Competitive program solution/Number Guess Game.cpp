#include<iostream>
using namespace std ;
int main()

{

    int n , x ;

    cout<<"Enter the number range :";
    cin>>n;

    cout<<"Enter the number you guess :" ;
    cin>>x;

    int low = 1;
    int high = n ;
    int  mid ;
    int guess;


    while (low<=high)
    {
        mid=(low+high)/2 ;
         if ( high ==low && low == mid)
         {
             guess= mid;
             break;

         }


        cout<<"Is your number greater than "<<mid<<"?"<<endl;
        string s ;
        cin>> s;
        if(s=="yes") low=mid+1;
        else if (s=="no") high=mid;
        else if ( high ==low && low == mid) guess= mid;
    }
cout<<"The number you guess is "<<mid;

}
