#include <iostream>

using namespace std;

int main() {
unsigned long long int n,d,sum=0,t=0,i,j;
cin>>n>>d;
long long int arr[n];
for( i=0;i<n;i++)

{
cin>>arr[i];
}

for(i=0;i<n;i++)

{
	for( j =0 ; j<n;j++)
    {

         if(arr[i]>arr[j])
          {
            t=arr[i]-arr[j];
             if(t<=d) sum=sum+1;
          }
        else if(arr[i]<arr[j])
        {
             t=arr[j]-arr[i];
             if(t<=d) sum=sum+1;

        }
          else if(arr[i]=arr[j])
        {
             if(i!=j)
             {
                 t=arr[j]-arr[i];
             if(t<=d) sum=sum+1;
             }

        }



}
}
cout<<sum;



 	return 0;
}
