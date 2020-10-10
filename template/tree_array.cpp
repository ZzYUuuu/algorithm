#include<bits/stdc++.h>
using namespace std;
int lowbit(int i){
    return i&(-i);
}
void updata(vector<int> &c , int i ,int v, int n){
    for(vector<int>::size_type k = i; k <= n; k += lowbit(k)){
        c[k] += v;
    }
}
int get_Sum(const vector<int> &c, int i){
    int sum(0);
    for(decltype(c.size()) k = i; k >= 1; k -= lowbit(i)){
        sum += c[k];
    }
    return sum;
}
int main(){
    array<int,10> a = {1,2,3,4,5,6,7,8,9};
    vector<int> c(10,0);
    for(size_t i = 0; i < 10; ++i){
        updata(c,i+1,a[i], 10);
    }
    for(const auto &x : c){
        cout << x << endl;
    }
    //cout << get_Sum(c,3) << endl;
    return 0;
} 
