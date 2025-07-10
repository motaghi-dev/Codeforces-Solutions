// Problem: Casimir's String Solitaire
// Contest: Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/problemset/problem/744/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b = 0, c = 0;
        string t;
        cin >> t;
        for (int j = 0; j < t.length(); j++)
        {
            if (t[j] == 'A' || t[j] == 'C')
                b++;
            else
                c++;
        }
        if (b == c)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}