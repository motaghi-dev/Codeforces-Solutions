// Problem: Fortune Telling
// Contest: Codeforces Beta Round 55 (Div. 2)
// URL: https://codeforces.com/problemset/problem/55/B

#include <bits/stdc++.h>
using namespace std;
 
#define all(V) ((V).begin()), ((V).end())
#define rall(V) ((V).rbegin()), ((V).rend())
#define sz(V)  ((int)((V).size()))
int a[105];
 
int main()
{
    ios::sync_with_stdio(false);
    int n,sum = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    
    sort(a, a + n);
    
    for(int i = 0 ; i < n ; i++)
    {
        if(sum % 2 != 0)
            return cout << sum << "\n", 0;
        if(a[i] % 2 != 0)
            sum -= a[i];
    }
    cout << "0" << "\n";
}