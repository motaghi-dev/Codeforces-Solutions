// Problem: Word
// Contest: Codeforces Beta Round 55 (Div. 2)
// URL: https://codeforces.com/problemset/problem/55/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    string z;
    cin >> z;
    int c;
    for (int i = 0; i < z.length(); i++)
    {
        if (tolower(z[i]) == z[i])
            c++;
    }
    if (c >= z.length() - c)
    {
        for (int i = 0; i < z.length(); i++)
        {
            z[i] = tolower(z[i]);
        }
    }
    else
    {
        for (int i = 0; i < z.length(); i++)
        {
            z[i] = toupper(z[i]);
        }
    }
    cout << z;
}