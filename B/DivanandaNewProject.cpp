// Problem: Divan and a New Project
// Contest: Codeforces Round 757 (Div. 2)
// URL: https://codeforces.com/problemset/problem/757/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
 
pair<int,int> a[maxn];
int ans[maxn];
 
bool cmp(pair<int,int> p1,pair<int,int>p2){
	return p1.first>p2.first;
}
 
int main(){
	ios::sync_with_stdio(0);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i].first;
			a[i].second=i;
		}
		sort(a+1,a+n+1,cmp);
 
		int j=1;
		ll len=0;
		for(int i=1;i<=n;i++){
 
			ans[a[i].second]=j;
			len+=ll(abs(j))*2ll*ll(a[i].first);
			if(j>0)	j=-j;
			else	j=-j,j++;
		}
		cout<<len<<endl<<"0 ";
		for(int i=1;i<=n;i++)	cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}