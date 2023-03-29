#include<stdio.h>
 int main(){
    int p,c,n;
    scanf("%d",&n);
    p=n;
    c=n;
    for(;p>=4;){
        c+= p/4;
        p=(p/4)+(p%4);
   
    }
     printf("%d\n",c );
     printf("%d\n",p );






    //int sum;
    // scanf("%d",&n);
    // for (int i = 0; i < n; ++i)
    // {
    //    scanf("%d",&w);
    //    sum += w;

    // }
 }