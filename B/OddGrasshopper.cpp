// Problem: Odd Grasshopper
// Contest: Codeforces Round 753 (Div. 3)
// URL: https://codeforces.com/problemset/problem/753/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; i++){
        long long a = 0, b = 0, c = 0, z = 0;
        cin >> a >> c;
        b = c % 4;
        if (b == 1)
            z =-c;
        else if (b == 2)
            z = 1;
        else if (b == 3)
            z = c + 1;
        if (a%2!=0)
            cout << a - z << "\n";
        else
            cout << a + z << "\n";
 
    }
    return 0;
}