
#include <stdio.h>
int main()
{
  int age = 5,x;
  int *p =&age;
  // address
  printf("age: %p\n", &age);
 printf("address of age: %p\n", p);
  printf("address of age: %p\n", &p);
  //value
  printf("value of ptr: %d\n", *p);
   printf("value of age: %d\n", age);
    printf("value of age: %d\n", *(&age));

  p=&x;
  *p=0;
    printf("x= %d\n", x);
   printf("*ptr = %d\n", *p);

  *p +=5;
   printf("x= %d\n", x);
   printf("*ptr = %d\n", *p);


   printf("x= %d\n", x);(*p)++;
   printf("*ptr = %d\n", *p);



  return 0;

}
