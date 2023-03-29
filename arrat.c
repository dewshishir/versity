#include<stdio.h>
int main(){
int j,m,n=5;
//    scanf("%d",&j);
    int a[]={1,23,3,4,5};
//
//    for(int i=0;i<n;i++)
//{
//    scanf("%d",&a[i]);
//}
    m=a[0];
    for(int i=0;i<n;i++){
    if(a[i]<m)
   m=a[i];


}printf("num:%d\n",m);

}
