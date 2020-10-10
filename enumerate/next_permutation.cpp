#include<bits/stdc++.h>
using namespace std;
//next_permutation
void print_permutation(int n, vector<int>res,int cur){
	if(n==cur){
		for(const auto &x : res) cout << x << " ";
		cout << endl;
	}
	else{
		for(int i = 1; i <= n; ++i){
			int flag = 1;
			for(int j = 0; j < cur; ++j){
				if(res[j] == i)flag = 0;
			}
			if(flag){
				res[cur] = i;
				print_permutation(n, res, cur+1);
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	vector<int>res(n,0);
	print_permutation(n,res,0);
	return 0;
}
