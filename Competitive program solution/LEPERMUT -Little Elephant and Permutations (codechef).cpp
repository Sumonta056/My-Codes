
#include<stdio.h>
main()
{
int t;
scanf(“%d”,&t);
while(t–)
{
int n,c=0,d=0,i,j;
scanf(“%d”,&n);
int a[n];
for(i=0;i<n;i++)
{
scanf(“%d”,&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
c++;

}

}
for(i=0;i<n-1;i++)
{
if(a[i]>a[i+1])
d++;
}
if(c==d)
printf(“YES\n”);
else
printf(“NO\n”);

}
return 0;
}
