// Problem: Sereja and Coat Rack
// Contest: Codeforces Round 215 (Div. 2)
// URL: https://codeforces.com/problemset/problem/215/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int n, d, a[100], m, sum = 0;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    sort (a, a + n);
    for (int i = 0; i < min(n, m); i++){
        sum += a[i];
    }
    if (min(n, m) == n)
        sum -= (m - n) * d;
    cout << sum;
    return 0;
}