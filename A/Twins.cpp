// Problem: Twins
// Contest: Codeforces Round 111 (Div. 2)
// URL: https://codeforces.com/problemset/problem/111/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int n, a[120], c = 0, v = 0, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v += a[i];
    }
    v /= 2;
    sort(a, a + n);
    if (a[0] == a[n - 1])
        cout << (n * a[0] / 2 + a[0]) / a[0];
    else if (n == 1)
        cout << 1;
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
         //   cout << s << " " << v << " " << c ;
            if (s > v)
            {
                cout << c;
                break;
            }
            else
            {
                s += a[i];
                c++;
            }
        }
    }
    return 0;
}