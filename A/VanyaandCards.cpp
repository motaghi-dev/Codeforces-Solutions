// Problem: Vanya and Cards
// Contest: Codeforces Round 235 (Div. 2)
// URL: https://codeforces.com/problemset/problem/235/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int n, m, sum = 0, tempo = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
    }
    if (sum < 0)
        sum *= -1;
    tempo = sum / m;
    if (tempo * m != sum)
        tempo++;
    cout << tempo;
 
    return 0;
}