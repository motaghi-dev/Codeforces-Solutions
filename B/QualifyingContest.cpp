// Problem: Qualifying Contest
// Contest: Codeforces Round 346 (Div. 2)
// URL: https://codeforces.com/problemset/problem/346/B

#include <bits/stdc++.h>
using namespace std;
vector <pair<int, string> > a[100000];
 
int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string sn;
        int r, sc;
        cin >> sn >> r >> sc;
        r--;
        a[r].push_back({sc, sn});
 
    }
    for (int i = 0; i < m; i++)
    {
        sort(a[i].begin(), a[i].end());
 
        reverse(a[i].begin(), a[i].end());
 
        if (a[i].size() > 2 && a[i][1].first == a[i][2].first)
            cout << '?';
        else
            cout << a[i][0].second << " " << a[i][1].second;
        cout << "\n";
    }
    return 0;
}