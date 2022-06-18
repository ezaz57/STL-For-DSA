#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void printVector(std::vector<int> v){
	
	for(auto it = v.begin();it!=v.end();it++){
		cout<<" "<<*it<<" ";
	}
}

void debug(){
	
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
}
int main(){
	debug();
	int n;	
	cin>>n;
	std::vector<int> v;
	
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	printVector(v);
}