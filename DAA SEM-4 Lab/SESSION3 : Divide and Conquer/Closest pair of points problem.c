#include <math.h>
int main()
{
int n , x[10] , y[10] , i , j;
float dist = 1000;
scanf("%d",&n);
for (i=0; i<n; i++)
scanf("%d%d",&x[i],&y[i]);
for (i=0; i<n-1; i++)
for (j=i+1; j<n; j++)
{
float temp = sqrt ( pow ( ( x[i] - x[j] ) , 2) + pow ( ( y[i] - y[j] ) , 2) );
if (temp < dist)
dist = temp;
}
printf("%f" , dist);
return 0;
}
