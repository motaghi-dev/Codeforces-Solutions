// Problem: Superhero Transformation
// Contest: CodeCraft-19 and Codeforces Round 537 (Div. 2)
// URL: https://codeforces.com/problemset/problem/19/A

#include <bits/stdc++.h>
 
using namespace std;
 
int bs(char arr[], int l, int r, char x)
{
    if (r >= l) {
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
    int l;
    char z[6] = {'a', 'e', 'i', 'o', 'u'};
    string s, t;
    cin >> s >> t;
    l = s.length();
    if (s.length() != t.length())
        cout << "No";
    else{
        for (int i = 0; i < l; i++){
            if (bs(z, 0, 5, s[i]) == -1 && bs(z, 0, 5, t[i]) != -1 || bs(z, 0, 5, s[i]) != -1 && bs(z, 0, 5, t[i]) == -1){
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
    }
}