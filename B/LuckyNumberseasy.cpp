// Problem: Lucky Numbers (easy)
// Contest: Codeforces Beta Round 77 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/77/B

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

 

int n;
ll solve(ll lucky,int four,int seven){
          if(lucky >= n && four == seven || lucky > 1e18)return lucky;
 
       return min(solve(lucky * 10 + 7, four ,seven + 1) , solve(lucky * 10 + 4,four + 1,seven));
}
int main(){
   cin >> n;
   cout << solve(0,0,0);
    return 0;
}