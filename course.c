#include <stdio.h>

#include <string.h>

int main() {

char a[100];
 char b[100];

printf("enter first word>>");
fgets(a, sizeof(a), stdin);
printf("enter second word>>");
fgets(b, sizeof(b), stdin);
printf("\n");
printf("\n");
int i, ans, len, len1;
len = strlen(a) -1;
len1 = strlen(b) - 1;

if (len!=len1){

printf(". .ERROR..........");
printf("\nSRING SIZE MUST BE SAME");

return 0;
}

for(i = 0; i<= len - 1; i++)

{

if (a[i] >='A' && a[i] <= 'Z')
{
a[i] = a[i] + 32;
}
if (b[i] >= 'A' && b[i] <= 'Z')

{

b[i] = b[i] + 32;

}
}


for (i=0; i<= len - 1; i++)

{

if (a[i] > b[i])

{

puts(a);

printf("come first");
return 0;

}

if (b[i] > a[i])
{
puts(b);

printf("come first");
return 0;

}

printf("both are same");
 return 0;
}
}

