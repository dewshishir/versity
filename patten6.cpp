// 1
// 23
// 456
// 78910
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n,a=1,s;
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=i; ++j)
		{
		   
			cout<<a;
			a++;
		}
		cout<<endl;
	}
}
