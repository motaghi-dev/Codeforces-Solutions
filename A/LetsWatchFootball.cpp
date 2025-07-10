// Problem: Let's Watch Football
// Contest: Codeforces Round 123 (Div. 2)
// URL: https://codeforces.com/problemset/problem/123/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    sum = (c * a + b - 1) / b;
    for (int i = 1; i <= sum; i++){
        if (sum * b >= (sum - i) * a){
            cout << i;
            break;
        }
    }
    return 0;
}