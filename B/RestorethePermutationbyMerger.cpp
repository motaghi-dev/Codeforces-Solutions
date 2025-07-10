// Problem: Restore the Permutation by Merger
// Contest: Codeforces Round 656 (Div. 3)
// URL: https://codeforces.com/problemset/problem/656/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int tt;
cin>>tt;
while(tt--)
{
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++)
    {
        int temp;
        cin>>temp;
        arr[i]=temp; 
    }
    vector<int> a;
    for(int i=0;i<2*n;i++)
    {
        if(find(a.begin(),a.end(),arr[i])==a.end())
        {
            a.push_back(arr[i]);
        }
    }
    for(int i:a)
    cout<<i<<" ";
    cout<<'\n';
}
    return 0;
}