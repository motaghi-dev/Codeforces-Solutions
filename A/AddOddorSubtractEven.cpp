// Problem: Add Odd or Subtract Even
// Contest: Codeforces Round 624 (Div. 3)
// URL: https://codeforces.com/problemset/problem/624/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
 
        int n,m;cin>>n>>m;
        if(n == m) cout << 0 << endl;
        else if(n > m) {
            if(abs(n-m) & 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
        else {
            if(abs(n-m) & 1) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
    return 0;
}