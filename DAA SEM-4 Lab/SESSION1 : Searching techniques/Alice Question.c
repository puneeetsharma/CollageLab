#include <stdio.h>
int main()
{
int a , i , flag = 0;
for ( i=0; i<10; i++ )
{
scanf ( "%d" , &a );
if ( a == 5 )
flag = 1;
}
if (flag)
printf ( "Roll no 5 belongs to Ms.Alice Class" );
else
printf ( "Roll no 5 not belongs to Ms.Alice Class" );
return 0;
}
