// Problem: Kind Anton
// Contest: Codeforces Round 632 (Div. 2)
// URL: https://codeforces.com/problemset/problem/632/B

#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    vector<int> good(2, 0);
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i] && !good[0]) {
            cout << "NO\n";
            return;
        } else if (a[i] < b[i] && !good[1]) {
            cout << "NO\n";
            return;
        }
        if (a[i] == -1) good[0] = 1;
        if (a[i] == 1) good[1] = 1;
    }
    cout << "YES\n";
}
 
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}