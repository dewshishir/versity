#include <stdio.h>
//#include <string.h>
struct s {
    int r;
    float c;
    char n[10];
};
int main()
{
    struct s s1;
    s1.r = 1;
    s1.c = 2.5;
   // s1.n ="he";
   strcpy(s1.n,"he");
    printf("student name = %s\n",s1);
//    printf("student roll = %d\n",s1.r);
//    printf("student cgpa = %f\n",s1.c);
}
