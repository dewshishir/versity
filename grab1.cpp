#include<bits/stdc++.h>
using namespace std;
int main()
 {
     

int t;
cin>>t;

while (t--) {

int n;

cin >> n;

int m= 0, b=0;

while (n--) {

int a;

cin >> a;
a%2 == 0 ? m +=a : b +=a;
}
m > b ? cout << "YES" << endl : cout << "NO" << endl;
}
return 0;
}