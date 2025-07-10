// Problem: XY Sequence
// Contest: Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/125/B

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        int n, b, x, y, s = 0;
        long long sum = 0;
        cin >> n >> b >> x >> y;
        for (int i = 0; i < n; i++)
        {
            if (max(s + x, s - y) > b)
                s = min(s + x, s - y);
            else
                s = max(s + x, s - y);
            sum += s;
        }
        cout << sum << "\n";
 
    }
    return 0;
}
// average