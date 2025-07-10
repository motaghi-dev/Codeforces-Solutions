// Problem: Way Too Long Words
// Contest: Codeforces Beta Round 65 (Div. 2)
// URL: https://codeforces.com/problemset/problem/65/A

#include <bits/stdc++.h>
using namespace std;
 
const int z = 1020;
 
int main()
{
    int a, b, c;
    string d;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> d;
        if (d.length() > 10) {
            cout << d[0] << d.length()-2 << d[d.length()-1];
        }
        else
            cout << d;
        cout << "\n";
    }
 
    return 0;
}