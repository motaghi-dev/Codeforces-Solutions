// Problem: Missing Bigram
// Contest: Codeforces Round 760 (Div. 3)
// URL: https://codeforces.com/problemset/problem/760/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
 
        string z = "", m;
        int a;
        cin >> a;
        string n[105];
        for (int j = 0; j < a - 2; j++){
            cin >> n[j];
        }
        z += n[0][0];
        for (int j = 0; j < a - 2; j++){
            if (n[j][1] == n[j + 1][0])
                z += n[j][1];
            else{
                z += n[j][1];
                z += n[j + 1][0];
            }
        }
 
       // cout << z.length() << " " << a << " " << z;
        string w = "";
        for (int c = 0; c < z.length() - 1; c++)
            w += z[c];
        if (w.length() != a)
            w += 'a';
 
        cout << w << "\n";
    }
 
    return 0;
}