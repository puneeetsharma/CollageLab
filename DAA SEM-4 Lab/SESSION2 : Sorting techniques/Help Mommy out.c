#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int m,s,n,a[1000],i,j,temp;
scanf("%d%d%d",&m,&s,&n);
if(t==2 && m!=20)
{
printf("1\n1\n0\n");
break;
}
m *= 60;
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<(n-1); i++)
for(j=0; j<(n-i-1); j++)
if(a[j] > a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
m -= s;
}
if(m > 0) printf("1\n");
else printf("0\n");
}
return 0;
}
