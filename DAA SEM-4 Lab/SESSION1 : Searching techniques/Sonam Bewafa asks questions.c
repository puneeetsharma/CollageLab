#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int N,Q;
scanf("%d%d",&N,&Q);
int a,b,arr[50],q,i,j=0;
for(i=0; i<N; i++)
  {
scanf ("%d%d",&a,&b);
for( ; a<=b; a++,j++)
arr[j] = a;
}
for(i=0; i<Q; i++)
{
scanf("%d",&q);
printf("%d ",arr[q-1]);
}
}
return 0;
}
