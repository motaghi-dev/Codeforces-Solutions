// Problem: Integer Moves
// Contest: Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/125/A

#include <bits/stdc++.h>
using namespace std;
 
long long x, y;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            long double dist = sqrt(pow(0-x, 2) + pow(0-y, 2));
            if(int(dist) == dist)
                cout << 1 << "\n";
            else
                cout << 2 << "\n";
        }
 
    }
    return 0;
}
// average