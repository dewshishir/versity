#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int ar[1000];
	for (int i = 0; i <1000 ; ++i)
	{
		cin>>ar[i];
	}
	for (int i = 0; i <sizeof(ar)  ; ++i)
	{
		cout<<ar[ar[i]];
	}
	return 0;
}