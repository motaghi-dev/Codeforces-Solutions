// Problem: Fancy Fence
// Contest: Codeforces Round 165 (Div. 2)
// URL: https://codeforces.com/problemset/problem/165/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {    
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
		
		int a; 
		cin >> a;
		cout << (360 % (180-a) == 0 ? "YES" : "NO") << "\n";
	}
}