// Problem: Doors and Keys
// Contest: Educational Codeforces Round 123 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/123/A

#include <bits/stdc++.h>
 
using namespace std;
const int max_n = 10e5 * 2;
int a[max_n];
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
 
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        string n;
        bool r = false,g = false, b = false, f = true;
        cin >> n;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == 'r')
                r = !r;
            if (n[i] == 'g')
                g = !g;
            if (n[i] == 'b')
                b = !b;
            if (n[i] == 'R' && !r)
                f = false;
            if (n[i] == 'G' && !g)
                f = false;
            if (n[i] == 'B' && !b)
                f = false;
            if (f == false)
                break;
 
        }
        if (f == false)
            cout << "NO";
        else
            cout << "YES";
        cout << "\n";
    }
    return 0;
}