#include<bits/stdc++.h>
using namespace std;
//Dropping Balls
const int maxn = 20;
vector<int>s(1<<maxn, 0); // Maximum number of nodes are 2^maxn - 1;
int main(){
	int D, I;
	while(cin >> D >> I, D && I){
		//D = 3, I = 4;
		int k, n = (1<<D) -1; // max node's numbering
		for(int i = 0; i < n+1; ++i){s[i] = 0;}//initialize the vector
		for(int i = 0; i < I; ++i){
			k = 1;
			while(1){
				s[k] = !s[k];
				k = s[k] ? 2*k : 2*k + 1;
				if(k>n)break;
			}
		}
		cout << k/2 << endl;
	}
	//the other way
	/*while(cin >> D >> I, D && I){
		int k = 1;
		for(int i = 0 ; i < D-1; ++i){
			if(I%2){// if I is odd
				k = k * 2;
				I = (I+1) / 2;
			}
			else{
				k = k * 2 + 1;
				I /= 2;
			}
		}
		cout << k << endl;		
	}*/
	return 0;
}
