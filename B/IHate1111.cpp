// Problem: I Hate 1111
// Contest: Codeforces Round 723 (Div. 2)
// URL: https://codeforces.com/problemset/problem/723/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n ;cin>>n;
        int f = 0;
        while(n>=0)
        {
            if(n%11==0)
            {
                f = 1;
                break;
            }
            n -=111;
        }
        if(f)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}