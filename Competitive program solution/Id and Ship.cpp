


#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i =1 ; i<=t ;i++)
    {
       char c;
       cin>>c;
       if(c=='b' || c=='B') cout<<"BattleShip"<<endl;
        else if(c=='c' || c=='C') cout<<"Cruiser"<<endl;
     else if(c=='d' || c=='D') cout<<"Destroyer"<<endl;
     else if(c=='f' || c=='F') cout<<"Frigate"<<endl;
    }

}
