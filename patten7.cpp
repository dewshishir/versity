// 1
// 01
// 101
// 0101
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
		    if((i+j)%2)
		    cout<<"0";
		    else
		    cout<<"1";
			
		}
		cout<<endl;
	}
}
