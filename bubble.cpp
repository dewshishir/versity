#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n,a[n];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int c=1;
	while(c<n){
		for (int i = 0; i < n-c; ++i)
		{
			if (a[i]>a[i+1])
			{
				int t=a[i];
				a[i]=a[i+1];
				a[i]=t;
			}
		}
		c++;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
}