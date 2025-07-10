// Problem: Honest Coach
// Contest: Codeforces Round 644 (Div. 3)
// URL: https://codeforces.com/problemset/problem/644/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int n, a[51], mino = 10000;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
        sort(a, a + n);
        for (int j = 0; j < n - 1; j++){
            mino = min(mino, a[j + 1] - a[j]);
        }
        cout << mino << "\n";
    }
    return 0;
}