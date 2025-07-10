// Problem: String Task
// Contest: Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/89/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    string z, x;
    cin >> z;
    for(int i = 0; i < z.length(); i++){
        z[i] = tolower(z[i]);
        if (z[i] != 'a' && z[i] != 'o' && z[i] != 'y' && z[i] && z[i] != 'e' && z[i] != 'u' && z[i] != 'i'){
            x += z[i];
        }
    }
 
    for(int i = 0; i < x.length(); i++){
        cout << "." << x[i];
    }
    return 0;
}