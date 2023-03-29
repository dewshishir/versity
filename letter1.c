#include <bits/stdc++.h> 
int main()
{
	char a[15];
	//scanf("%s",a);
	//gets(a);
	fgets(a,sizeof(a),stdin);
	//int count=0;
	for (int i = 0; a[i]!='\0'; ++i){
		if (a[i]>='a' && a[i]<='z')
		a[i]-=32;
	}
	printf("%s\n",a );
	//puts(a);
	return 0;
}