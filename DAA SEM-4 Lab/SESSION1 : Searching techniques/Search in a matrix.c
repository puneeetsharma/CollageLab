#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, m, a[10][10], i, j, s;
scanf("%d%d",&n,&m);
for(i=0; i<n; i++)
for(j=0; j<m; j++)
scanf("%d",&a[i][j]);
scanf("%d",&s);
int flag = 0;
for(i=0; i<n; i++)
for(j=0; j<m; j++)
if(a[i][j] == s)
flag = 1;
printf("%d\n",flag);
}
return 0;
}
