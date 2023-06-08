#include<bits/stdc++.h>
using namespace std;
const int N = (int)1e7+5;
#define ll long long int

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
string dc = "DLRU";

vector<int>a[1111];
bool visited[1111][1111];

bool isValid(int x, int y, int n, int m)
{
	return (x>-1 && x<n && y>-1 && y<m && !visited[x][y] && a[x][y]!=0);
}

ll DFS(int x, int y, int n, int m)
{
	ll result = a[x][y];
	visited[x][y]=true;
	for(int i=0; i<4; i++)
	{
		int tx = x + dx[i];
		int ty = y + dy[i];
		if(isValid(tx, ty, n, m))
		{
			result += DFS(tx, ty, n, m);
		}
	}
	return result;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int e,f;
		cin>>e>>f;
		for(int i=0; i<e; i++)
		{
			a[i].assign(f,0);
			for(int j=0; j<f; j++)
			{
				cin>>a[i][j];
				visited[i][j]=false;
			}
		}

		ll ans=0;

		for(int i=0; i<e; i++)
		{
			for(int j=0; j<f; j++)
			{
				if(visited[i][j] || a[i][j]==0)
					continue;

				ans = max(ans, DFS(i,j,e,f));
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
