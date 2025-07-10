// Problem: Reverse
// Contest: Codeforces Round 771 (Div. 2)
// URL: https://codeforces.com/problemset/problem/771/A

#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int bs(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return bs(arr, l, mid - 1, x);
 
        return bs(arr, mid + 1, r, x);
    }
    return -1;
}
 
 
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a[500 + 5], b[500 + 5];
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            b[j] = a[j];
        }
        sort(b, b + n);
        int r = 0, l = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[j] < a[j])
            {
            //    cout << b[j] << "/" << a[j] << "\n";
                for (int v = 0; v < n; v++)
                {
                    if (a[v] == b[j])
                    {
                        r = v;
                        break;
                    }
                }
                l = j;
              //  cout << l << "/" << r << "\n";
                break;
            }
        }
        int c = 0;
        for (int j = l; j <= l + (r - l)/2; j++)
        {
            //   cout << "b ";
            //    cout << j << " " << r - c << "\n";
            swap(a[j], a[r - c]);
            c++;
        }
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    string z;
    vector <int> a;
    cin >> z;
    int n = z.length(), cnt = 0;
    for (int i = 0; i < n; i++){
        a.push_back(z[i]);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
     //   cout << a[i] << " ";
        if (a[i] != a[i + 1])
            cnt++;
    }
    if (cnt % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}