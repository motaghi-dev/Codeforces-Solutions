// Problem: Polycarp and Sums of Subsequences
// Contest: Codeforces Round 760 (Div. 3)
// URL: https://codeforces.com/problemset/problem/760/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a[7], b = 0, c = 2, d = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> a[j];
        }
 
        cout << a[0] << " " << a[1] << " ";
        while (a[0] + a[1] == a[c]){
            int z;
            for (z = 0; z < 7; z++){
                if (a[z] == a[c] && z != c){
                    b++;
                    break;
                }
            }
            if (b != 0){
                c = z;
                break;
            }
            c++;
        }
        cout << a[c] << "\n";
    }
    return 0;
}