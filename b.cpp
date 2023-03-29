#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter size:-";
	cin>>n;
	std::vector<int>a(n) ;
	cout<<"enter element:-";
	for(int i=1;i<=n;i++)
		cin >> a[i];
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
	        if(a[j]>a[j+1]){
	            int t=a[j];
	            a[j]=a[j+1];
	            a[j+1]=t;
	        }
	    }
	}
	for(int i=1;i<=n;i++)
	 cout << a[i] << " ";
}
