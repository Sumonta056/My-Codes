 
#include<bits/stdc++.h>

#define   ll             long long
#define   pb             push_back
#define   mp             make_pair
#define   nl             endl
#define   bg             begin()
#define   en             end()
#define   sz             size()
#define   sp             " "
#define   Y              cout << "YES\n"
#define   N              cout << "NO\n"
#define   mod            1000000007
#define   MAX            1e6
#define   forn(i,n)      for(long long i=0;i<n;i++)
#define   form(i,m)      for(ll i=0;i<m;i++)
#define   rep(i,a,b)     for(ll i=a;i<=b;i++)

using namespace std;

vector<ll> isprime(MAX+1,1);
vector <ll> primes;
map <ll,ll> humprime;

ll power(ll base, ll powr)
{
  ll res = 1;
  while(powr)
  {
    if(powr%2==0) base*=base,powr/=2;
    else res*=base,powr--;    
  }
  return res;
}

ll a_powern_modm(ll a, ll n, ll m)
{
  ll base = a;
  ll res = 1;

  while(n)
  {
     if(n%2)
     {
       res = ((res%m)*(base%m))%m;
       n--;
     }
     else
     {
       n/=2;
       base = ((base%m)*(base%m))%m;
     }
  }
  return res;
 
}

void sieve()
{
    isprime[1]=0;
    for(ll i=3; i*i<=MAX; i+=2)
        if(isprime[i])
            for(ll j=i*i; j<=MAX; j+=2*i)
                isprime[j] = 0;

    primes.push_back(2); humprime[2]++;
    for(ll i=3; i<=MAX; i+=2)
        if(isprime[i]) humprime[i]++,primes.push_back(i);
}

void factorization(ll nn)
{
    for(ll i=0;primes[i]*primes[i]<=nn;i++)
    {
        if(nn%primes[i]==0)
        {
            ll co = 0;
            while(nn%primes[i]==0)
            {
              // co++;
               //cout << primes[i] << " ";
                nn/=primes[i];
            }
        }
    }
    if(nn!=1)cout << nn << " ";
    cout << endl;
}
 
ll chk_pal(ll ii, ll jj, string ss)
{
  string s11 ;
  for(;ii<=jj;ii++) s11.pb(ss[ii]);
  string s22 = s11;
  reverse(s22.begin(),s22.end());
  return(s11==s22? 1 : 0);
}

ll chk_prime(ll numm)
{
  ll ff = 1;
  if(numm==1) return 0;
  for(ll ii=2;ii*ii<=numm;ii++) if(numm%ii==0){ff=0;break;}
  return ff;
} 

ll give_sum(ll nn) {return ((nn+1)*nn)/2;}

ll give_lcm(ll aa, ll bb) {return (aa/__gcd(aa,bb))*bb;}


ll give_num(string s){stringstream mar___(s); ll numm = 0;mar___ >> numm; return numm;}

int main()
{
 

  int tt; cin >> tt; 
  while(tt--)
  {
   ll n;string s; cin >> n >> s;
   vector<ll> t,m;
   forn(i,n)
   {
       if(s[i]=='T') t.pb(i);
       else m.pb(i);
   }
   bool f = 0;
   ll x = n/3;
   if(n%3) f= 1;
   if(m.size()!=x && t.size()!=(n-x)) f=1;
   if(f==0)
   {
  //   cout << "cf\n";
     x = 0;
      forn(i,n)
      {
        if(s[i]=='T')x++;
        else x--;
        if(x<0) f=1;
        if(x>(n/3)) f=1;

      }
      if(x!=(n/3)) f=1;
   }
   
   if(f)N;
   else Y;
  }
  

}