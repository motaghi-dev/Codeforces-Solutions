// Problem: Shifting Sort
// Contest: Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/problemset/problem/744/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int a[n], m = n - 1;
        string maino;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 1; i < n; i++){
            int mini = 10000000000, tempo = 0;
 
            for (int j = i - 1; j < n; j++){
                int v;
                v = min(a[j], mini);
                if (mini > v){
                    mini = v;
                    tempo = j;
                }
            }
      //      cout << i << " " << tempo << "\n" ;
            for (int j = tempo; j >= i; j--){
                int b;
                b = a[j-1];
                a[j-1] = a[j];
                a[j] = b;
                //cout << j << " ";
            }
            if (i == tempo + 1)
                m--;
            if (i != tempo + 1)
                maino += to_string(i) + " " + to_string(tempo + 1) + " " + to_string(max(tempo + 1, i) - min(tempo + 1, i)) + "\n";
        }
        cout << m << "\n";
        cout << maino;
      //  cout << "\n" << "(";
     //   for (int i = 0; i < n; i++){
       //         cout << a[i] << " ";
      //      }
       // cout << ")";
    }
    return 0;
}