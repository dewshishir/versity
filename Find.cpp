#include<bits/stdc++.h>
using namespace std;
 
 bool is_alternating_binary_string(string s) {
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<char> chars(s.begin(), s.end());
        if (chars.size() == 1) { // special case where all characters are the same
            cout << "NO\n";
            continue;
        }

        string s1 = s, s2 = s;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == 'a') {
                s1[i] = '0';
                s2[i] = '1';
            } else {
                s1[i] = '1';
                s2[i] = '0';
            }
        }

        if (is_alternating_binary_string(s1) || is_alternating_binary_string(s2)) {
            cout << "YES\n";
        }
    }
}
