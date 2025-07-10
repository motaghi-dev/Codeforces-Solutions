// Problem: Watermelon
// Contest: Codeforces Beta Round 4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;
 
int main()
{
    int number,i;
    cin >> number;
 
    if (((number-2)%2 == 0) && number > 2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}