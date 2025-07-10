// Problem: Exams
// Contest: Codeforces Round 122 (Div. 2)
// URL: https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t, z;
    cin >> t >> z;
    t = t - (z - t * 2);
    if (t < 0)
        cout << 0;
    else
        cout << t;
    return 0;
}