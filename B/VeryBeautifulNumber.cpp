// Problem: Very Beautiful Number
// Contest: Codeforces Round 231 (Div. 2)
// URL: https://codeforces.com/problemset/problem/231/B

#include <bits/stdc++.h>
#include <bits/extc++.h>
 
int n, p, x;
const int N = 100005;
 
void solve() {
    cin >> p >> x;
    for (int i = 1; i <= 9; i++) {
        int ost = 0;
        vector<int> res(p);
        res[0] = i;
        for (int j = 1; j < p; j++) {
            int now = x * res[j - 1] + ost;
            res[j] = now % 10;
            ost = now / 10;
        }
        if (res[0] == (ost + x * res.back()) && res.back() != 0) {
            reverse(all(res));
            for (auto j : res) cout << j;
            return;
        }
    }
    cout << "Impossible";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //    freopen("input.txt", "r", stdin);
    int tt = 1;
    //cin >> tt;
    while (tt--)
        solve();
}