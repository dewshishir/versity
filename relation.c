//#include <stdio.h>
//int main()
//{
//     int n=10,m=8,  s=0,t ;
//    int c=2;
//    c -=m;
//    printf("%d",c);
//}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;

scanf("%d", &n);
char arr[101];
scanf("%s", &arr);
int maxb =1,cu=1;

for (int i=0; i<n; i++) {
    if ( arr[i]== arr[i+1]){
        cu++;
    }
    else{

if (cu>maxb)
{

maxb= cu;
}
        cu=1;
    }
}
    printf("%d",maxb);

    return 0;
}
