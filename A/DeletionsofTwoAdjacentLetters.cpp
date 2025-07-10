// Problem: Deletions of Two Adjacent Letters
// Contest: Codeforces Round 776 (Div. 3)
// URL: https://codeforces.com/problemset/problem/776/A

#include <bits/stdc++.h>
 
using namespace std;
 
//bool a[105];
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string n;
        char c;
        bool f = 0;
        cin >> n >> c;
 
        for (int j  = 0; j < n.length(); j++)
        {
          if (n[j] == c && j % 2 == 0 && (n.length() - 1 - j) % 2 == 0){
            f = 1;
          }
        }
 
        if (f == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
 
    }
    return 0;
}