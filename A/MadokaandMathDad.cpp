// Problem: Madoka and Math Dad
// Contest: Codeforces Round 777 (Div. 2)
// URL: https://codeforces.com/problemset/problem/777/A

#include <bits/stdc++.h>
 
using namespace std;
 
//bool a[105];
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n, u;
        string z = "";
        bool f = 0;
        cin >> n;
        u = n;
        if (u % 3 != 1)
        {
            while(n > 0)
            {
                if (f == 0)
                {
                    z += "2";
                    n -= 2;
                    f = 1;
                }
                else
                {
                    z += "1";
                    n -= 1;
                    f = 0;
                }
 
            }
        }
        else
        {
            while(n > 0)
            {
                if (f == 0)
                {
                    z += "1";
                    n -= 1;
                    f = 1;
                }
                else
                {
                    z += "2";
                    n -= 2;
                    f = 0;
                }
 
            }
        }
        cout << z <<  "\n";
    }
    return 0;
}