#include<bits/stdc++.h>
using namespace std;
//primer ring problem
int n;
vector<int>isp, A, vis;

bool isprime(int n){// n must >= 2;
	for(int i = 2; i*i <= n; ++i){
		if(n%i==0)return false;
	}
	return true;
}
void dfs(int cur){
	if(cur == n && isp[A[0] + A[n-1]]){
		for(const auto & x: A){
			cout << x << " ";
		}
		cout << endl;
	}
	else{
		for(int i = 2; i <= n; ++i){
			if(!vis[i] && isp[A[cur-1] + i]){
				vis[i] = 1;
				A[cur] = i;
				dfs(cur+1);
				vis[i] = 0;
			}
		}
	}
}
int main(){
//n <= 16
	cin >> n;
	isp = vector<int>(n*2,0);
	vis = vector<int>(n+1,0);
	A = vector<int>(n,0);
	A[0] = 1;//subject requirements

	for(int i = 2; i <= n*2; ++i){
		if(isprime(i))isp[i] = 1;	
	}
	dfs(1);
	return 0;
}
