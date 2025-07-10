// Problem: Discounts
// Contest: Educational Codeforces Round 61 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/61/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    long long t = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        t += a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    reverse(a, a + n);
    for (int i = 0; i < m; i++){
        cout << t - (a[b[i] - 1]) << "\n";
    }
}