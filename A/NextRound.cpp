// Problem: Next Round
// Contest: VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/2012/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, c, d, e = 0;
    cin >> a >> c;
    int b[a];
    for (int i = 0; i < a; i++) {
        cin >> d;
        b[i] = d;
    }
    for (int i = 0; i < a; i++){
        if (b[i] > 0 && b[i] >= b[c-1]) {
            e++;
        }
    }
    cout << e;
 
    return 0;
}