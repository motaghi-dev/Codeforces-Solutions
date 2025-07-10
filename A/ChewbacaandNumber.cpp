// Problem: Chewbaсca and Number
// Contest: Codeforces Round 291 (Div. 2)
// URL: https://codeforces.com/problemset/problem/291/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    string z;
    cin >> z;
    for (int i = 0;  i < z.length(); i++){
        int a = z[i] - '0';
      //  cout << a <<"\n";
        if (i == 0 && 9 - a == 0)
            cout << a;
        else
            cout << min(a, 9 - a);
    }
    return 0;
}