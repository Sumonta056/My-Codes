#include <iostream>
#include <cstdio>
using namespace std;

int main() {
 int t, n, a[105], n_inv, l_inv;
 scanf("%d", &t);
 while(t--) {
  scanf("%d", &n);
  n_inv=l_inv=0;
  for(int i=0; i<n; i++) scanf("%d", &a[i]);
  for(int i=0; i<n-1; i++) for(int j=i+1; j<n; j++) if(a[i]>a[j]) n_inv++;
  for(int i=1; i<n; i++) if(a[i-1]>a[i]) l_inv++;
  if(l_inv==n_inv) printf("YES\n");
  else printf("NO\n");
 }
 return 0;
}
