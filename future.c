#include<bits/stdc++.h>
using namespace std;

#define pqll         priority_queue<ll>
#define pqi          priority_queue<int>
#define pqs          priority_queue<string>
#define pqc          priority_queue<char>
#define pll          pair<ll, ll>
#define pii          pair<int, int>
#define pcl          pair<char, ll>
#define psl          pair<string, ll>
#define psi          pair<string, int>
#define sti          set<int>
#define stll         set<ll>
#define sts          set<string>
#define stc          set<char>
#define mpii         map<int, int>
#define mpll         map<ll, ll>
#define mpsl         map<string, ll>
#define mpcl         map<char, ll>
#define vi           vector<int>
#define vll          vector<ll>
#define vs           vector<string>
#define vc           vector<char>
#define eps          1e-10
#define ll           long long
#define lmx          LONG_MAX
#define lmn          LONG_MIN
#define dbg          cout<<"HerE!\n";
#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define F            first
#define S            second
#define pb           push_back
#define MP           make_pair
#define sz(a)        (ll)a.size()
#define mem(a, b)    memset(a, b, sizeof(a));
#define all(x)       x.begin(),x.end()
#define allr(x)      x.rbegin(),x.rend()
#define EfficientIO  ios::sync_with_stdio(0);cin.tie(0);
#define newLine      cout<<"\n";
#define nl           '\n'
#define pi           acos(-1)
#define Precision(a) cout<<fixed<<setprecision(a)
#define MOD          1000000007
#define MAX          10005

int main() {
    EfficientIO

    ll a, b, c, x; cin>>a>>b>>c>>x;
    double res;
    if(x<=a) res = 1.0;
    else if(x > b) res = 0.0;
    else res = c*1.0/(b-a);

    printf("%.12lf\n", res);

    return 0;
}



