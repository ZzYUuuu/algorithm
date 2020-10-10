#include<bits/stdc++.h>
using namespace std;
bool flag = false;
bool different(int i, int j){
	char s[12];
	sprintf(s,"%05d%05d",i,j);
	int l = strlen(s);
	if(l>10)return false;
	sort(s,s+l);
	int len = unique(s,s+l) - s;
	return len == l;
}
int main(){
	int n;
	while(cin >> n && n){
		flag = false;
		for(int i = 1234; i <= 98765; ++i){
			int j = i * n;
			if(different(i,j)){
				flag = true;
				printf("%05d / %05d = %d\n",j,i,n);
			}
		}
		if(!flag) cout << "Can't find the data can be division" << endl;
	}
}
