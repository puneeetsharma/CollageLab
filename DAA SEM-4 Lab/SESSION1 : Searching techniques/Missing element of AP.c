#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
int n , a[1000] , i , j , temp;
scanf("%d",&n);
int b[1000] = {0};
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n; i++)
for(j=i+1; j<n; j++)
if(a[i]>a[j])
{ temp=a[i]; a[i]=a[j]; a[j]=temp; }
for(i=1; i<n; i++)
b[i] = a[i] - a[i-1];
for(i=2; i<n; i++)
if(b[i] != b[i-1])
{
if(b[i+1]==0)
{
if(b[i] > b[i-1]) printf("%d\n",a[i-1]+b[i-1]);
else printf("%d\n",a[i-1]-b[i]);
}
else if(b[i-2]==0 && b[i]==b[i+1]) printf("%d\n",a[i-1]-b[i]);
else printf("%d\n",a[i-1]+b[i-1]);
break;
  }
}
return 0;
}
