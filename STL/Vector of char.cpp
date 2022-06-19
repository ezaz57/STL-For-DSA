#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.in", "r", stdin);
  	freopen("output.out", "w", stdout);
  	#endif
 
	vector<char> v;

	int n;
	cin>>n;

	// get User Input in Vector
	for(int i=0;i<n;i++){
		char x;
		cin>>x;

		v.push_back(x);
	}

	// print Vector
	for(auto it = v.begin(); it!=v.end();it++){
		cout<<" "<<*it;
	}

	return 0;
}
