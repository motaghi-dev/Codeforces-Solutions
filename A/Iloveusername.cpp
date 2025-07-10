// Problem: I_love_\%username\%
// Contest: Codeforces Round 109 (Div. 2)
// URL: https://codeforces.com/problemset/problem/109/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t, a[10000];
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a[i];
    }
    int mino = 100000, maxo = 0, c = 0, temp1, temp2;
    for (int i = 0; i < t; i++){
        temp1 = mino;
        temp2 = maxo;
        mino = min(a[i], mino);
        maxo = max(a[i], maxo);
        if (a[i] == mino && i != 0 && a[i] != temp1 || a[i] == maxo && i != 0 && temp2 != a[i])
            c++;
    }
    cout << c;
    return 0;
}