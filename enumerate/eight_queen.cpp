#include<bits/stdc++.h>
using namespace std;
//eight queen
//column row
const int n = 8;
int tot;
int C[n];//
void search(int cur){
	if(cur == n)++tot;
	else{
		for(int i = 0 ; i < n; ++i){
			bool flag = true;
			C[cur] = i;
			for(int j = 0; j < cur; ++j){ // Try to put the queen on the i column;
				if(C[cur] == C[j] || C[cur]-cur == C[j]-j || C[cur] + cur == C[j] + j){
					flag = false; break;
				}
			}
			if(flag)search(cur+1);
		}
	}
	
}
int main(){
	search(0);
	cout << tot << endl;
	return 0;
}
