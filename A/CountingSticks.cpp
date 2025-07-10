// Problem: Counting Sticks
// Contest: Codeforces Round 231 (Div. 2)
// URL: https://codeforces.com/problemset/problem/231/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
	cin>>x;
	int q=0,z=0,h=0;
	int flag1=0,flag2=0;
	for(int i=0;i<x.size();i++){
		if(x[i]=='+')flag1=1;
		if(x[i]=='=')flag2=1;
		if(x[i]!='+'&&x[i]!='='){
			if(flag1==0&&flag2==0)q++;
			else if(flag1==1&&flag2==0)z++;
			else h++;
		}
	}
	if((q+z)==h)cout<<x;
	else if(abs((q+z)-h)==2){
		if(q+z>h){
			if(q==1&&z!=1){
				cout<<"|"<<"+";
				for(int i=0;i<z-1;i++)cout<<"|";
				cout<<"=";
				for(int i=0;i<h+1;i++)cout<<"|";
			}
			else if(q!=1&&z==1){
				for(int i=0;i<q-1;i++)cout<<"|";
				cout<<"+"<<"|"<<"=";
				for(int i=0;i<h+1;i++)cout<<"|";
			}
			else{
				for(int i=0;i<q-1;i++)cout<<"|";
				cout<<"+";
				for(int i=0;i<z;i++)cout<<"|";
				cout<<"=";
				for(int i=0;i<h+1;i++)cout<<"|";
			}
		}
		else{
			for(int i=0;i<q+1;i++)cout<<"|";
			cout<<"+";
			for(int i=0;i<z;i++)cout<<"|";
			cout<<"=";
			for(int i=0;i<h-1;i++)cout<<"|";
		}
	}
	else cout<<"Impossible";
	return 0;
}