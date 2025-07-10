// Problem: Cthulhu
// Contest: Codeforces Beta Round 80 (Div. 1 Only)
// URL: https://codeforces.com/problemset/problem/80/B

#include <bits/stdc++.h>
using namespace std;
 
int n,m,x,y,t=0;
bool vis[109];
vector<int> adj[109];
 
void dfs(int u)
{
    
	vis[u]=true,++t;
	for(int v: adj[u])
		if(!vis[v])
			dfs(v);
}
 
int main()
{
    ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i = 0; i<m; i++)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1);
	if(t==n && m==n)
		cout<<"FHTAGN!\n";
	else
		cout<<"NO\n";
}