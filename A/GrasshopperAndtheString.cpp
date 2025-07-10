// Problem: Grasshopper And the String
// Contest: Codeforces Round 378 (Div. 2)
// URL: https://codeforces.com/problemset/problem/378/A

#include <bits/stdc++.h>
using namespace std;
 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first 
#define S second
typedef long long LL;
 
const LL MOD = 1e9 + 7;
const int N = 310;
 
char a[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};
 
int p = -1, m;
 
string s;
 
bool v (char x)
{
    for (int i = 0; i < 6; i++)
        if (a[i] == x)
            return 1;
 
    return 0;
}
 
int main()
{
    cin >> s;
 
    for (int i = 0; i < s.size(); i++)
    {
        if (v(s[i]))
        {
            m = max(m, i - p);
            p = i;
        }
    }
 
    cout << max(m, (int)s.size() - p);
}