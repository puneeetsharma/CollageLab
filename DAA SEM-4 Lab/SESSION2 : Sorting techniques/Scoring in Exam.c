#include <stdio.h>
int main()
{
int n, q, a[20], b[20], i, j, temp;
scanf("%d%d",&n,&q);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
for(i=0; i<n; i++)
scanf("%d",&b[i]);
for(i=0; i<n-1; i++)
for(j=i+1; j<n; j++)
if(b[i] < b[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
temp = b[i];
b[i] = b[j];
b[j] = temp;
}
while(q--)
{
int num , ans = 0;
scanf("%d",&num);
while(num--)
ans += a[num];
printf("%d\n",ans);
}
return 0;
}
