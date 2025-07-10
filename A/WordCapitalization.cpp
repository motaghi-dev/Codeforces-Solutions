// Problem: Word Capitalization
// Contest: Codeforces Round 172 (Div. 2)
// URL: https://codeforces.com/problemset/problem/172/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string a;
    cin >> a;
    cout << char(toupper(a[0]));
    for (int i = 1; i < a.length(); i++){
        cout << a[i];
    }
    return 0;
}