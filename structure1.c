#include<stdio.h>
struct employee //global structure
{
    int id;
    char name[10];
    float salary;

};
 int main()
 {
     struct employee e1,e2;
    printf("Enter id:\n");
    scanf("%d",&e1.id);
    printf("Enter name:\n");
    scanf("%s",e1.name);
    printf("Enter salary:\n");
    scanf("%f",&e1.salary);
    printf("\nEmployee id is:%d \nName is:%s \nSalary is:%.2f",e1.id, e1.name, e1.salary);

    /* e1.id=1;
   // strcpy(e1.name,"Anis");
    //  e1.salary=12000;
     printf("First employee id is:%d\n", e1.id);
     printf("First employee name is:%s\n", e1.name);
     printf("First employee salary is:%.2f\n", e1.salary);*/

     return 0;
 }
