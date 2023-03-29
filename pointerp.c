#include<stdio.h>
int main()
{
int a[5]={10,56,89,34,50};
int *ptr;
ptr=a;
//printf("%d\n", ++*ptr);
printf("%d\n", *++ptr);
//printf("%d\n", *ptr++);
//printf("%d\n", (*++ptr)++);
//printf("%d\n", ++(*ptr));
//printf("%d\n", (*ptr)++);



return 0;

}
