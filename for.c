#include <stdio.h>
int main()
{
    int n,m, c, s=0,t ;
   // scanf("%d",&t);
   // while(t--){
  scanf("%d %d",&m, &c);
//scanf("%d",&m);

    for(n = 1;n<=m; n++)
    {s=c*n;
    if(s<=m){

printf("%d ",s);
    }
}








//if(c>m)
//{
//    for(n = m;n<=c; n++)
//    {
//      printf("%d ",n);
//    }
//}
//
//
//    else if(m>c){
//   for(n = m;n>=c; n--)
//    {
//      printf("%d ",n);
//    }
//}
//}

    return 0;
}
