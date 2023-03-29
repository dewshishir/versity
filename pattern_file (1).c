//write a program in C to write following pattern in a file
/*
1
22
333
4444
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,row, j;

    printf("Enter Number of Rows: ");
    scanf("%d", &row);

    FILE *fp;
    fp = fopen("pattern1.txt", "w");
    if(fp==NULL) {
        printf("File creation failed");
        return 0;
    }
    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            fprintf(fp, "%d ", i);
        }fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}
