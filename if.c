#include <stdio.h>

int main()
{
    int a ,b, c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c)
    {printf("equal");}
    else if(a>=b && a>=c){
    printf("a is big");
    }
    else if(b>=a && b>=c){
    printf("b is big");

    }
   else
    {printf("c big");}

        return 0;
}


