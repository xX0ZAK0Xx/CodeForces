#include <bits/stdc++.h>
#define nfs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)solve();
#define print(n) cout<<(n)<<"\n";
#define printarray(arr) for(auto xx: (arr) ){cout<<xx<<" ";} cout<<"\n";
#define print2darray(arr) for(auto yy: (arr)){printarray(yy)}
#define ll long long int
#define  d2vec(name, row, col, fill) vector<vector<int>> (name) ((row), vector<int>((col),(fill)));
#define  D2vec(name, row, col, fill) vector<vector<ll>> (name) ((row), vector<ll>((col),(fill)));
#define rowfill(arr, col, val) for(ll xx=0 ; xx<(col) ; xx++){ arr[0][xx]=(val);}
#define colfill(arr, row, val) for(ll xx=0 ; xx<(row) ; xx++){ arr[xx][0]=(val);}
using namespace std;
void solve(){
    int n; cin  >> n;
    map<int,int> num;
    int sm = INT_MIN;
    for(int i=0 ; i<n ; i++){
        int t; cin >> t;
        num[t]++;
        sm = max(sm,num[t]);
    }

    int ans = 0;
    while(sm < n){
        int needToSwap = min(n-sm, sm);
        ans += 1 + needToSwap;// 1 because of copy;
        sm += needToSwap;
    }
    print(ans)
}
int main(){

    nfs test

    return 0;
}