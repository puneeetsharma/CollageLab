#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, a[10], i, j, temp, count=0;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n-1; i++)
for(j=0; j<n-i-1; j++)
if(a[j]>a[j+1])
{
temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;
count++;
}
printf("%d\n",count);
}
return 0;
}
