// Problem: Anton and Digits
// Contest: Codeforces Round 379 (Div. 2)
// URL: https://codeforces.com/problemset/problem/379/B

#include <iostream>
using namespace std;
 
int main()
{
    long long a2,a3,a5,a6,mina,suma,minb,sumb;
    cin >> a2;
    cin >> a3;
    cin >> a5;
    cin >> a6;
    if (a2 <= a5)
        mina = a2;
    else
        mina = a5;
    if (mina > a6)
        mina = a6;
    suma = mina*256;
    if (a2 == mina)
        cout << suma;
    else{
        minb = a2 - mina;
        if (a3 <= minb)
            minb = a3;
        sumb = minb*32;
        cout << suma+sumb;
        }
 
    return 0;
}