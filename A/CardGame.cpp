// Problem: Card Game
// Contest: Codeforces Beta Round 82 (Div. 2)
// URL: https://codeforces.com/problemset/problem/82/A

#include <bits/stdc++.h>
 
using namespace std;
 
bool test(char x, char y)
{
    char a[9] = {'6','7','8','9','T','J', 'Q', 'K', 'A'};
    int w, s;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == x)
            w = i;
    }
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == y)
            s = i;
    }
    if (w > s)
        return 1;
    else
        return 0;
}
 
int main()
{
    ios::sync_with_stdio(false);
    string x, y;
    char t;
    cin >> t >> x >> y;
    if (x[1] == t && y[1] != t)
        cout << "YES";
    else if (y[1] == t && x[1] != t)
        cout << "NO";
    else if (y[1] != x[1])
        cout << "NO";
    else
    {
        if (test(x[0], y[0]) == 1)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}