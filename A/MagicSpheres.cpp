// Problem: Magic Spheres
// Contest: Codeforces Round 335 (Div. 2)
// URL: https://codeforces.com/problemset/problem/335/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int a, b, c, d, e, f, sum = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if ((a - d) > 0)
        sum += ((a - d) / 2);
    else
        sum += (a - d);
 
    if ((b - e) > 0)
        sum += ((b - e) / 2);
    else
        sum += (b - e);
 
    if ((c - f) > 0)
        sum += ((c - f) / 2);
    else
        sum += (c - f);
 
    if (sum >= 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}