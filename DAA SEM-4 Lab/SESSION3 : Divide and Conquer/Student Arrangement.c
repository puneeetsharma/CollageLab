#include <stdio.h>
int main()
{
int n , m , k;
scanf("%d %d %d",&n,&m,&k);
int a[10] , i;
for(i=0; i<n; i++)
scanf ("%d",&a[i]);
int r[m+1];
for(i=1; i<=m; i++)
r[i] = k;
for(i=0; i<n; i++)
r[a[i]]--;
int ans = 0;
for(i=1; i<=m; i++)
if(r[i]<0)
ans += 0 - r[i];
printf("%d",ans);
return 0;
}
