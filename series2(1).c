//1^2+2^2+3^2+..........+n^2
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        printf("+%d^2",i);
        sum=sum+i*i;
    }
    printf("=%d",sum);
}