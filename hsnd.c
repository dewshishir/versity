#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    long long int a,s,b,c;
    scanf("%lld\n",&t);

    while(t--){
    scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
     printf("%lld\n",(s-(a+b+c)));


}

   return 0;
}
