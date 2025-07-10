// Problem: Die Roll
// Contest: Codeforces Beta Round 9 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/9/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int a, b, c = 0, d = 0;
    cin >> a >> b;
    c = max(a, b);
    if (a == b && a == 1)
    {
        cout << "1/1";
        return 0;
    }
    c = 6 - c + 1;
    if (6 % c == 0)
    {
        //
        if (c == 2){
            cout << 1 << "/" << 6 / c;
            return 0;
        }
        if (c == 1){
            cout << 1 << "/" << 6;
            return 0;
        }
        cout << c / (6 / c) << "/" << 6 / c;
    }
    else
    {
        int g = 6;
     //   cout << c;
        if (c == 4)
        {
            c = 2;
            g = 3;
        }
        cout << c << "/" << g;
    }
    return 0;
}