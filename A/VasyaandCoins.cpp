// Problem: Vasya and Coins
// Contest: Codeforces Round 780 (Div. 3)
// URL: https://codeforces.com/problemset/problem/780/A

#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        if (a == 0)
            cout << 1;
        else
            cout << (a + b * 2 + 1);
        cout << "\n";
 
    }
    return 0;
}