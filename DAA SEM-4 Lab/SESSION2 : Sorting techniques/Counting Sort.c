#include <stdio.h>
int main()
{
int n , a[100] , i , j , temp , count[100]={0};
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n-1; i++)
for(j=i+1; j<n; j++)
if(a[i]>a[j]) { temp=a[i]; a[i]=a[j]; a[j]=temp; }
for(i=0; i<n; i++)
count[a[i]]++;
for(i=0; i<n; i++)
{
if(count[a[i]])
printf("%d %d\n",a[i],count[a[i]]);
count[a[i]]=0;
}
return 0;
}
