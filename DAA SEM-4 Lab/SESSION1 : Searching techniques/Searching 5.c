#include <stdio.h>
int main()
{
int n , a[10] , i , s , temp=0;
scanf("%d",&n);
for(i=0; i<n; i++)
scanf("%d",&a[i]);
scanf("%d",&s);
for(i=0; i<n; i++)
if (a[i] == s)
{
temp = 1;
break;
}
if (temp)
printf("%d found at location %d",s,i+1);
else
printf("Not found! %d is not present in the list",s);
return 0;
}
