// Problem: Lucky Ticket
// Contest: Codeforces Round 104 (Div. 2)
// URL: https://codeforces.com/problemset/problem/104/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int a, b = 0, c = 0;
    string z;
    cin >> a >> z;
    for (int i = 0; i < z.length(); i++){
        if (z[i] != '4' && z[i] != '7'){
            cout << "NO";
            return 0;
        }
    }
     for (int i = 0; i < z.length() / 2; i++){
        b += z[i] - '0';
   //     cout << z[i] << " 99\n";
    }
     for (int i = z.length() / 2; i < z.length(); i++){
        c += z[i] - '0';
    //    cout << z[i] << "\n";
    }
    if (b == c){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}