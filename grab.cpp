#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
/*{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

	}
}*/
{
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
int a[n], sum = 0, cnt = 0;
for (int i = 0; i < n; i++) {
cin >> a[i];
sum += a[i];
if (a[i] % 2 != 0) cnt++;
}
if (sum % 2 != 0) {
cout << "NO\n";
continue;
}
if (cnt == 0 || cnt == n) {
cout << "YES\n";
continue;
}
sort(a, a + n);
int mihai = 0, bianca = 0;
for (int i = n - 1; i >= 0; i--) {
if (a[i] % 2 == 0) {
mihai += a[i];
swap(a[i], a[n - 1]);
n--;
} 
else {
bianca += a[i];
}
if (mihai > bianca) {
cout << "YES\n";
break;
}
if (i == 0) {
cout << "NO\n";
}
}
}
return 0;
}