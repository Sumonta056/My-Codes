// ** Sumonta Saha Mridul **
// SWE - SUST


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;


  //Sieve of Eratosthenes - Start
  bool arr[3001];
  fill_n(arr,3001,true);
  vector<int> primes;
  int limit = int(sqrt(3000));
  int i = 2;
  while(i <= limit){
    //Start crossing out multiples of i
    for(int im=i*i; im<=3000; im += i){
      arr[im] = false;
    }
    for(int j=i+1; j<=3000; j++){
      if(arr[j] == true){
        i = j;
        break;
      }
    }
  }
  for(int index=2; index<=3000; index++){
    if(arr[index] == true){
      primes.push_back(index);
    }
  }
  //Sieve of Eratosthenes - End
  
  //Generating all the lucky numbers
  vector<int> lucky_number;
  for(int num=5; num<=3000; num++){
    int count = 0;
    //Dividing num by primes, to get the prime factorization
    for(int j = 0; j<primes.size(); j++){
      if(num % primes[j] == 0){
        count += 1;
      }
      if(count >= 3){
        lucky_number.push_back(num);
        break;
      }
    }
  }
  
  //For Fast IO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t,n;
  cin>>t;
  for(int testcase=0; testcase<t; testcase++){
    cin>>n;
    cout<<lucky_number[n-1]<<endl;
  }
  return 0;


}