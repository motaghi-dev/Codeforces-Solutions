// Problem: Dubstep
// Contest: Codeforces Round 130 (Div. 2)
// URL: https://codeforces.com/problemset/problem/130/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    string z;
    cin >> z;
    for (int i = 2; i < z.length(); i++){
        if (z[i] == 'B' && z[i - 1] == 'U' && z[i - 2] == 'W'){
            for (int j = i; j >= i - 2; j--)
                z[j] = ' ';
        }
    }
    bool f = false, v = false;
    for (int i = 0; i < z.length(); i++){
        if (z[i] == ' ' && f == false && v == true){
            cout << " ";
            f = true;
        }
        else if (z[i] != ' '){
            cout << z[i];
            f = false;
            v = true;
        }
 
    }
    return 0;
}