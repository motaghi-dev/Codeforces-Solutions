// Problem: Calculating Function
// Contest: Codeforces Round 277 (Div. 2)
// URL: https://codeforces.com/problemset/problem/277/A

#include <iostream>
using namespace std;
 
int main()
{
    int64_t n;
    cin >> n;
    if (n%2 == 0)
        cout << n/2;
    else
        cout << -(n/2)-1;
 
    return 0;
}