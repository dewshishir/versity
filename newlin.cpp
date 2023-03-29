#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int t, n, q, s[N];
int parent[N], count[N];

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unionn(int x, int y) {
    int px = find(x);
    int py = find(y);
    if (px == py) return;
    if (s[px] > s[py]) {
        parent[py] = px;
        count[px] += count[py];
    } else {
        parent[px] = py;
        count[py] += count[px];
    }
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
            parent[i] = i;
            count[i] = 1;
        }
        cin >> q;
        while (q--) {
            int type, x, y;
            cin >> type >> x;
            if (type == 1) {
                cin >> y;
                unionn(x, y);
            } else if (type == 2) {
                cout << count[find(x)] << endl;
            } else {
                for (int i = 1; i <= n; i++) {
                    if (find(i) == find(x)) {
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

