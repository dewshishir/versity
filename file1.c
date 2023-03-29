#include <stdio.h>
int main()
{
 FILE *f;
 f=fopen("Text.txt","r");
 fprintf(f,"%c",'m','a','n','g','o',' '),
fprintf(f,"%c",'a'),
 fprintf(f,"%c",'c'),
 fprintf(f,"%c",'P'),

fclose(f);













//  int ch;
//  fscanf(f,"%d",&ch);
//  printf("charecter = %d\n",ch);
//    fscanf(f,"%d",&ch);
//  printf("charecter = %d\n",ch);
//  fscanf(f,"%d",&ch);
//  printf("charecter = %d\n",ch);
//
//
//  fclose(f);










//  if(f == NULL){
//   printf("doesnt exist\n");
//  } else{
//  fclose(f);
//  }

 return 0;
}
