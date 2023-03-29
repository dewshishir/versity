#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   gets(str);


   int dummy[26]={0};

   char  arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

   for(int i=0;i<26;i++)
   {
       dummy[(str[i]-'a')]++;
   }

   for(int i=0;i<26;i++)
   {

     while(dummy[i]!=0)
     {
         printf("%c",arr[i]);
         dummy[i]--;
     }




   }


   return 0;
}
