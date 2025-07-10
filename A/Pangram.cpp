// Problem: Pangram
// Contest: Codeforces Round 295 (Div. 2)
// URL: https://codeforces.com/problemset/problem/295/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int n, cnt[26], c = 0;
    string z;
    fill(cnt, cnt + 26, 0);
    cin >> n >> z;
    for (int i = 0; i < n; i++){
        cnt[tolower(z[i]) - 97]++;
    }
    for (int i = 0; i < 26; i++){
        if (cnt[i] >= 1)
            c++;
    }
   // cout << c;
    if (c == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
// average