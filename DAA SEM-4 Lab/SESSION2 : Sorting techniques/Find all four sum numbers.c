#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, K, a[100], i, j, k, l;
scanf("%d%d",&n,&K);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n-1; i++) for(j=0; j<n-i-1; j++) if(a[j]>a[j+1]) { k=a[j];
a[j]=a[j+1]; a[j+1]=k; }
for(i=0; i<n-3; i++) for(j=i+1; j<n-2; j++) for(k=j+1; k<n-1; k++)
for(l=k+1; l<n; l++)
if((a[i]+a[j]+a[k]+a[l])==K)
printf("%d %d %d %d $",a[i],a[j],a[k],a[l]);
printf("\n");
}
return 0;
}
