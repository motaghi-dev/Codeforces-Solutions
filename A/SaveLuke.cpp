// Problem: Save Luke
// Contest: AIM Tech Round (Div. 2)
// URL: https://codeforces.com/problemset/problem/2/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    double d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;
    cout << setprecision(21);
    cout << (l - d) / (v1 + v2);
    return 0;
}