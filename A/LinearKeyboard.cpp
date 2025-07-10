// Problem: Linear Keyboard
// Contest: Codeforces Round 753 (Div. 3)
// URL: https://codeforces.com/problemset/problem/753/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++){
        string t, s;
        int a = 0, b = 0, c = 0, d = 0;
        cin >> t >> s;
        for (int j = 0; j < s.length(); j++){
            for (int z = 0; z < 26; z++){
                if (s[j] == t[z]){
                    b = z + 1;
                 //   cout << b << "\n";
                }
            }
            if(a == 0){
                a = b;
            }
            else{
 
            c += (max(a, b) - min(a, b));
            a = b;
            }
 
        }
        cout << c << "\n";
    }
 
    return 0;
}