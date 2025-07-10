// Problem: Min Or Sum
// Contest: Codeforces Round 772 (Div. 2)
// URL: https://codeforces.com/problemset/problem/772/A

#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
        int t;
        long long a[105];
        cin >> t;
        for (int j = 0; j < t; j++)
        {
            int n;
            long long cnt = 0;
            cin >> n;
            for (int i = 0; i < n; i++)
                cin >> a[i];
            sort(a, a + n);
            for (int i = 1; i < n; i++){
                if ((a[i - 1] | a[i]) <= a[i - 1] + a[i]){
                    a[i] = (a[i - 1] | a[i]);
                    a[i  - 1] = 0;
                }
            }
            for (int i = 0; i < n; i++)
                cnt += a[i];
            cout << cnt << "\n";
        }
        return 0;
}