// Problem: Fair Playoff
// Contest: Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int a[4], b[4], c = 0;
        for (int j = 0; j < 4; j++){
            int x;
            cin >> x;
            a[j] = x;
            b[j] = x;
        }
        sort(a, a + 4);
        if (max(b[0], b[1]) == a[3] || max(b[0], b[1]) == a[2])
            c++;
        if (max(b[2], b[3]) == a[3] || max(b[2], b[3]) == a[2])
            c++;
        if (c == 2)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}