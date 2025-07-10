// Problem: Luntik and Concerts
// Contest: Codeforces Round 750 (Div. 2)
// URL: https://codeforces.com/problemset/problem/750/A

#include<bits/stdc++.h>
 
using namespace std;
 
main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << (a + c) % 2 << '\n';
    }
    return 0;
}