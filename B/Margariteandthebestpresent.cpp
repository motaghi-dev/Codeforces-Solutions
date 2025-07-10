// Problem: Margarite and the best present
// Contest: Codeforces Round 524 (Div. 2)
// URL: https://codeforces.com/problemset/problem/524/B

#include <bits/stdc++.h>
using namespace std;
int sum(int x)
{
    if(x%2==0)
        return x/2;
    else
        return (x-1)/2-x;
}
int main()
{
    int t,l,r,Sl,Sr;
    cin >> t;
    while(t--)
    {
        cin >> l;
        cin >> r;
        l=(l-1);
        if(l%2==0)
            Sl=l/2;
        else
            Sl=(l-1)/2-l;
        if(r%2==0)
            Sr =r/2;
        else
            Sr= (r-1)/2-r;
        cout << Sr-Sl << endl;
    }
    return 0;
}