// Problem: Vasya the Hipster
// Contest: Codeforces Round 322 (Div. 2)
// URL: https://codeforces.com/problemset/problem/322/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b;
    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2;
    return 0;
}