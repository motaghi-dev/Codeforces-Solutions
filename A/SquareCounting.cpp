// Problem: Square Counting
// Contest: Codeforces Round 774 (Div. 2)
// URL: https://codeforces.com/problemset/problem/774/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        long long n, s, cnt = 0;
        cin >> n >> s;
        while (s > ((n - cnt) * (n-1)) && s >= n * n){
            cnt += s / (n * n);
            s = s % (n*n);
        }
        cout << cnt << "\n";
    }
    return 0;
}