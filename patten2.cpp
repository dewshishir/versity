//    *
//   **
//  ***
// ****
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	//cin>>m;
		for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=n-i ; ++j)
		cout<<" ";

		for (int j = 1; j <=i ; ++j)
				cout<<"*"; 
			
			/*if (i ==1 || j==1||i==n||j==m)
			cout<<"*";
		else
			cout<<" ";*/cout<<endl;
		}
		
	}
