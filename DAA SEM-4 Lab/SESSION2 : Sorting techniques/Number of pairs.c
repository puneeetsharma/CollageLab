#include <stdio.h>
#include <math.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int m,n,x[10],y[10],i,j,count=0;
scanf("%d%d",&m,&n);
for(i=0; i<m; i++)
scanf("%d",&x[i]);
for(j=0; j<n; j++)
scanf("%d",&y[j]);
for(i=0; i<m; i++)
for(j=0; j<n; j++)
if(pow(x[i],y[j]) > pow(y[j],x[i]))
count++;
printf("%d\n",count);
}
return 0;
}
