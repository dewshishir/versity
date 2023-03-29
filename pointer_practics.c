#include<stdio.h>
int main()
{
 int x=6,y=4,z,*p1,*p2;
 p1=&x, p2=&y;
 z=x; x=y; y=z;
 printf("%d %d\n", *p1,*p2);
 *p1=(x++)+3;
 *p2=++x-y;
printf("%d %d\n", x,y);
 p1=p2;
 printf("%d %d\n",*p1,*p2);
return 0;





}
