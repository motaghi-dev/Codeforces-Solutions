// Problem: Game With Sticks
// Contest: Codeforces Round 258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/258/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	if (n > m) {
		swap(n, m);
	}
	if (n % 2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}
	return 0;
}