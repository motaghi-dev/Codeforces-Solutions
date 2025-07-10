// Problem: George and Accommodation
// Contest: Codeforces Round 267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/267/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //n = region
    //m = travel cnt
    ios::sync_with_stdio(false);
    int n, a[105][2], cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1];
    for (int i = 0; i < n; i++){
        if (abs(a[i][0] - a[i][1]) >= 2)
            cnt++;
    }
    cout << cnt;
    return 0;
}