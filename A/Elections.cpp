// Problem: Elections
// Contest: Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/problemset/problem/748/A

#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c;
        if (a > max(b, c))
            cout << 0;
        else
            cout << max(b, c) - a + 1;
        cout << " ";
        if (b > max(a, c))
            cout << 0;
        else
            cout << max(a, c) - b + 1;
        cout << " ";
        if (c > max(b, a))
            cout << 0;
        else
            cout << max(b, a) - c + 1;
        cout << "\n";
    }
    return 0;
}