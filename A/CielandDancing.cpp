// Problem: Ciel and Dancing
// Contest: Codeforces Round 190 (Div. 2)
// URL: https://codeforces.com/problemset/problem/190/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int b, g;
    cin >> b >> g;
    cout << b + g -1 << "\n";
    for (int j = 1; j <= g; j++){
            cout << 1 << " " << j << "\n";
    }
    if (b > 1){
        for (int j = 2; j <= b; j++)
            cout << j << " " << 1 << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int r, g, b, a = 0, d = 0, c = 0;
    cin >> r >> g >> b;
    a = r/3 + g/3 + b/3;
    if (min(r,min(g, b)) > 0)
        d = 1 + (r-1)/3 + (g-1)/3 + (b-1)/3;
    if (min(r,min(g, b)) > 1)
        c = 2 + (r-2)/3 + (g-2)/3 + (b-2)/3;
 //   cout << r/3 << " " << b/3 << " " << c/3 << "\n";
 //   cout << a;
    cout << max(max(a, d), c);
    return 0;
}