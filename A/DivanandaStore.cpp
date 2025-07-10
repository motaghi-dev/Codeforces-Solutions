// Problem: Divan and a Store
// Contest: Codeforces Round 757 (Div. 2)
// URL: https://codeforces.com/problemset/problem/757/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t = 0, n = 100, l, r, k;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> l >> r >> k;
        int a[102], c = 0, j;
        for (j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (j; j < 102; j++)
            a[j] = 1000000000;
        std::sort(std::begin(a), std::end(a));
        for (int j = 0; j < n; j++)
        {
 //           cout << a[j] << " " << " " << k << "\n";
            if (a[j] >= l && a[j] <= r && a[j] <= k)
            {
                c++;
                k -= a[j];
            }
        }
        cout << c << "\n";
    }
    return 0;
}