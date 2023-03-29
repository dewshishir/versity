#include <bits/stdc++.h>
using namespace std;
int main()
{   int c;
cout<<"if number press 3 if string press 2";
    cin>>c;
    if(c==2){
	string a;
	getline(cin,a);
	for(int i=0;i<a.size();i++){

	    for(int j=0;j<a.size()-1;j++){
	        if(a[j]>a[j+1]){
	            char t=a[j];
	            a[j]=a[j+1];
	            a[j+1]=t;
	        }
	    }

	}
	for(int i=0;i<a.size();i++)
	 cout << a[i] << " ";
}
else if(c==3)
{
int n;
	cin>>n;
	std::vector<int>a(n) ;
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
}
