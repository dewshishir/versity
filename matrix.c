#include <stdio.h>

int main(){
    int i,j,n=3;
    int sum1,sum2,sum3,flag, arr[3][3];
    for (i = 0; i <n; i++){
        for ( j = 0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i<n; i++) {
        sum1 = 0;
        for (j = 0; j < n; j++) {
            sum1 = sum1 + arr[i][j];
        }
        
    }
    sum2 = 0;
    for (i= 0; i < n; i++) {
        for (j = 0; j<n; j++) {
            if (i == j){
                sum2 = sum2 + arr[i][j];
            }
        }
        if (sum1 == sum2){
                flag = 1;
        }
            
        else {
            flag = 0;
            break;
        }
    }
    
    for (i = 0; i<n; i++) {
        sum3 = 0;
        for (j = 0; j<n; j++) {
            sum3 = sum3 + arr[j][i];
        }
        if (sum1 == sum3){
            flag = 1;
        }
            
        else {
            flag = 0;
            break;
        }
    }


    if (flag == 1)
      printf("Yes");
   else
      printf("No");
 
   return 0;
}
