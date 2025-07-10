// Problem: Postcards and photos
// Contest: Codeforces Beta Round 98 (Div. 2)
// URL: https://codeforces.com/problemset/problem/98/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    string z;
    cin >> z;
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < z.length(); i++){
    //    cout << "c " << c << "  b " << b << "\n";
        if (z[i] == z[i + 1] && b < 5){
            b++;
        }
        else{
            if (b == 0 && z[i] != z[i + 1])
                c++;
            else if (i == 0 && z[i] != z[i + 1])
                c++;
            else
                c++;
            b = 1;
        }
    }
    cout << c;
    return 0;
}