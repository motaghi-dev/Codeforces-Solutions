// Problem: Wet Shark and Odd and Even
// Contest: Codeforces Round 341 (Div. 2)
// URL: https://codeforces.com/problemset/problem/341/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    long long n, a[100005], odd = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] % 2 == 1)
            odd++;
    }
    sort(a, a + n);
  //  cout << odd << "\n";
    if (odd % 2 == 1)
        odd--;
    for (int i = n - 1; i >= 0; i--){
        if (a[i] % 2 == 1 && odd != 0){
            sum += a[i];
            odd--;
        }
        else if (a[i] % 2 == 0)
            sum += a[i];
 
    }
    cout << sum;
    return 0;
}