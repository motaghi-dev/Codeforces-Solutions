// Problem: Football
// Contest: Codeforces Beta Round 77 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/77/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    string t;
    int a = 1;
    cin >> t;
    for (int i = 1; i < t.length(); i++){
       // cout << a;
        if (a >= 7){
            break;
        }
        if (t[i] == t[i - 1])
            a++;
        else
            a = 1;
    }
    if (a >= 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}