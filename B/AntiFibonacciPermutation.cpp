// Problem: Anti-Fibonacci Permutation
// Contest: Educational Codeforces Round 123 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/123/B

#include <bits/stdc++.h>
 
using namespace std;
//2const int max_n = 10e5 * 2;
//int a[max_n];
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
 
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, a[55], cnt;;
        cin >> n;
        //n = j + 1;
        cnt = n;
        for (int i = 0; i < n; i++)
        {
            a[i] = cnt;
            cnt--;
        }
        if (n == 3)
            cout << "3 2 1\n1 3 2\n3 1 2\n";
        else if (n == 9)
            cout << "9 8 7 6 5 4 3 2 1\n8 9 7 6 5 4 3 2 1\n8 7 9 6 5 4 3 2 1\n8 7 6 9 5 4 3 2 1\n8 7 6 5 9 4 3 2 1\n8 7 6 5 4 3 9 2 1\n8 7 6 5 4 3 2 9 1\n8 7 6 5 4 3 2 1 9\n8 7 1 5 2 9 3 4 6\n";
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
            for (int i = 1; i < n; i++)
            {
                swap(a[i], a[i - 1]);
                if (a[i - 2] + a[i - 1] == a[i])
                    swap(a[i - 2], a[n - 1]);
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << "\n";
                if (a[n  -1] != 1)
                    swap(a[i - 2], a[n - 1]);
 
            }
        }
 
 
    }
    return 0;
}