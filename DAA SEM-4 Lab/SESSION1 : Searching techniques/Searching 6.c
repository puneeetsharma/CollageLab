#include <stdio.h>
int main()
{
int a[5], i, j, k;
for(i=0; i<5; i++)
scanf("%d",&a[i]);
for(i=0; i<3; i++)
for(j=i+1; j<4; j++)
for(k=j+1; k<5; k++)
if((a[i]+a[j]+a[k])==0)
printf("%d %d %d\n",a[i],a[j],a[k]);
return 0;
}
