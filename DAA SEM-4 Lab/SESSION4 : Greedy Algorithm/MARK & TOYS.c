#include <stdio.h>
int main()
{
int n, k, a[20], i, j, temp, sum=0;
scanf("%d %d",&n,&k);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n; i++)
for(j=i+1; j<n; j++)
if(a[i]>a[j])
{ temp=a[i]; a[i]=a[j]; a[j]=temp; }
for(i=0; i<n; i++)
{
sum += a[i];
if(sum > k)
break;
}
printf("%d",i);
return 0;
}
