#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	//cin>>m;
		for (int i = n; i >= 1; --i)
	{
		for (int j = i; j >=1 ; --j)
		{
			cout<<"*";
			/*if (i ==1 || j==1||i==n||j==m)
			cout<<"*";
		else
			cout<<" ";*/
		}
		cout<<endl;
	}
}