// Problem: New Year and the Christmas Ornament
// Contest: Good Bye 2018
// URL: https://codeforces.com/problemset/problem/2018/A

#include <iostream>
using namespace std;
 
int main()
{
    long long r,b,y;
    cin >> y;
    cin >> b;
    cin >> r;
    if(b>=r)
        b=r-1;
    else
        r=b+1;
    if(y>=b)
        y=b-1;
    else{
        b=y+1;
        r=y+2;
    }
    cout << r+b+y;
    return 0;
}