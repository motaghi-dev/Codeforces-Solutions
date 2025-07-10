// Problem: Professor GukiZ's Robot
// Contest: Educational Codeforces Round 6
// URL: https://codeforces.com/problemset/problem/6/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = max(a, c) - min(a, c);
    b = max(b, d) - min (b, d);
    cout << max(a, b);
    return 0;
}