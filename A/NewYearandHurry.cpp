// Problem: New Year and Hurry
// Contest: Good Bye 2016
// URL: https://codeforces.com/problemset/problem/2016/A

#include<iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
	int a, b, p = 0;
	cin >> a >> b;
	while(b <= 240 && p <= a)
	{
		p++;
		b += 5 * p;
	}
	cout << p - 1;
}