// Problem: Prove Him Wrong
// Contest: Educational Codeforces Round 124 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/124/B

#include <bits/stdc++.h>
 
using namespace std;
 
//bool a[105];
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 19)
            cout << "NO";
        else{
            cout << "YES" << "\n";
            int c = 1;
            while (n--){
 
                cout << c << " ";
                c *= 3;
            }
 
        }
        cout << "\n";
    }
    return 0;
}