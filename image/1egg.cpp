#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int solve(int k, int n) // k eggs and n layers
{
   if(k == 1)return n;
   if(!n) return 0;
   if(dp[k][n])return dp[k][n];
   int res = INT_MAX;
   for(int i = 1; i < n+1; ++i){
       res = min(res, max(solve(k-1,i-1),//broken egg
                        solve(k,n-i))+1);//not broken egg
   } 
   dp[k][n] = res;//memory data
   return dp[k][n];
}



int main(){
    int k, n;
    cin >> k >> n;
    dp = vector<vector<int>>(k+1,vector<int>(n+1,0));
    int ans = solve(k,n);
    cout << ans << endl;
    return 0;
}