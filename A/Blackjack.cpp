// Problem: Blackjack
// Contest: Codeforces Beta Round 80 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int n, sum = 0, b;
    string a;
    cin >> n;
    if (n >= 0 && n <= 10)
        cout << 0;
    if (n >= 11 && n <= 19 || n == 21)
        cout << 4;
    if (n == 20)
        cout << 15;
    if (n >= 22 && n <= 25)
        cout << 0;
    return 0;
}