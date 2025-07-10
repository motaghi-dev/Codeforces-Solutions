// Problem: Patrick and Shopping
// Contest: Codeforces Round 332 (Div. 2)
// URL: https://codeforces.com/problemset/problem/332/A

#include <iostream>
using namespace std;
 
int main()
{
    long long a2,a3,a5,a6,mina,suma,minb,sumb;
    cin >> a2;
    cin >> a3;
    cin >> a5;
    if (a2 + a3 <= a5)
        cout << (a2+a3)*2;
    else if (a2 + a5 <= a3)
        cout << (a2+a5)*2;
    else if (a3 + a5 <= a2)
        cout << 2*(a5+a3);
    else
        cout << a2+a3+a5;
 
    return 0;
}