// Problem: Swaps
// Contest: Codeforces Round 743 (Div. 2)
// URL: https://codeforces.com/problemset/problem/743/B

//Coding kro mohabbat nahi
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
typedef pair<ll,ll> ii;
#define iii pair<ll,ii>
#define f(i,a,b) for(int i = a;i < b;i++)
#define pb push_back
#define vll vector<ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
int main(){
  ll t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
      vll a(n);vll b(n);
      for(auto &x:a) cin>>x;
      for(auto &x:b) cin>>x;
      map<ll,ll> hash;
      for(int i=0;i<n;i++){
          hash[a[i]]=i;
          hash[b[i]]=i;
      }
      ll m=INT_MAX,ans=INT_MAX;
      for(int i=2*n;i>0;i=i-2){
          m=min(m,hash[i]);
          ans=min(ans,m+hash[i-1]);
      }
      cout<<ans<<endl;
  
  }
}