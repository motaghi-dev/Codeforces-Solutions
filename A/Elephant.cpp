// Problem: Elephant
// Contest: Codeforces Round 340 (Div. 2)
// URL: https://codeforces.com/problemset/problem/340/A

#include <iostream>
using namespace std;
 
int main()
{
    int number;
    int temp;
    cin >> number;
    temp = number%5;
 
    if( temp == 0)
    {
        cout << number/5;
    }
    else
    {
        cout << (number/5)+1;
    }
    return 0;
}