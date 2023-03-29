#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,a,b,c;
	cin>>t;
	while(t--){
		cin>>a;
		cin>>b;
		cin>>c;
		if ((a+b)==c)
		{
			cout<<"+"<<endl;
		}
		else {
			cout<<"-"<<endl;
		}

	}
	return 0;
}