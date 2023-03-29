#include<stdio.h>
 int main()
{
	int t,sum=0,a;
	scanf("%d",&a);
	while(a>0){
		t=a%10;
		
sum +=t;
a/=10;


	}	printf("%d",sum);
	return 0;// scanf("%d",&a);
}






	