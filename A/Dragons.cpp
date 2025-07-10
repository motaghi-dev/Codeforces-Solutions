// Problem: Dragons
// Contest: Codeforces Round 142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/142/A

#include <bits/stdc++.h>
using namespace std;
const int MAX_A = 1005;
 
int main()
{
    ios::sync_with_stdio(false);
    int s, n, a[MAX_A], b[MAX_A], tempo[MAX_A];
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        tempo[i] = a[i];
    }
    sort(tempo, tempo + n);
    for (int i = 0; i < n; i++)
    {
        int c, maxo = 0, t = 1005;
        if (s > tempo[i])
        {
            for (int j = 0; j < n; j++)
            {
                if (tempo[i] == a[j])
                {
                    if (maxo < b[j]){
                        maxo = max(b[j], maxo);
                        t = j;
                    }
                }
            }
            b[t] = 0;
            s += maxo;
        }
        else
        {
            cout << "NO";
            return 0;
        }
 
    }
    cout << "YES";
    return 0;
}