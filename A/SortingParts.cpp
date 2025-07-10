// Problem: Sorting Parts
// Contest: Codeforces Global Round 19
// URL: https://codeforces.com/problemset/problem/19/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, a[10000 + 20], b[10000 + 20];
        bool flag = false;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> a[j];
            b[j] = a[j];
        }
        sort(b, b + n);
        for (int j = 0; j < n; j++){
            if (a[j] != b[j]){
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}