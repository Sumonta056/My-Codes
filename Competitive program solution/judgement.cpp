#include<iostream>
#include<string>
using namespace std;
int  main()

{
    int n;
    cin>>n;
    int a=0, b=0 , c=0, d=0;
    for(int i =1 ; i<=n ; i++)
    {
        string s;
        cin>>s;

        if(s=="AC") a++;
        else if( s == "WA" ) b++;
        else if  (s == "TLE") c++;
        else d++;
    }


    cout<<"AC x "<<a<<endl<<"WA x "<<b<<endl<<"TLE x "<<c<<endl<<"RE x "<<d<<endl;


}
