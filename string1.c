#include <bits/stdc++.h> 
int main()
{
	char a[15];
	//scanf("%s",a);
	//gets(a);
	fgets(a,sizeof(a),stdin);
	int count=0;
	for (int i = 0; a[i]!='\0'; i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
			count++;
			/*else if(a[i]=='e')
			count++;
			else if(a[i]=='i')
			count++;
			else if(a[i]=='o')
			count++;
			else if(a[i]=='u')
			count++;*/
	}
	printf("my %d\n",count);
	//printf("my %s\n",a);
	return 0;
}