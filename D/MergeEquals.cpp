// Problem: Merge Equals
// Contest: Educational Codeforces Round 42 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/42/D

#include<iostream>
 
#include<algorithm>
 
#include<cstdio>
 
#include<cstring>
 
#include<queue>
 
#include<map>
 
#define ll long long
 
using namespace std;
 
const int maxn = 1e5+7;
 
typedef pair<ll, ll> P;
 
int n;
 
ll a;
 
priority_queue<P, vector<P>, greater<P> > q, Q;
 
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld", &a);
        P p(a, i);
        q.push(p);
    }
    while(!q.empty())
    {
        P p = q.top();
        q.pop();
        if(q.empty()) {
            swap(p.first, p.second);
            Q.push(p);
            break;
        }
        P pp = q.top();
        q.pop();
        if(pp.first != p.first)
        {
            q.push(pp);
            swap(p.first, p.second);
            Q.push(p);
        }
        else
        {
            pp.first *= 2;
            q.push(pp);
        }
    }
    printf("%d\n", Q.size());
    P p = Q.top();
    Q.pop();
    printf("%lld", p.second);
    while(!Q.empty()){
        p = Q.top();
        Q.pop();
        printf(" %lld", p.second);
    }
    cout << endl;
    return 0;
}