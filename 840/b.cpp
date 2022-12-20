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
bool comp(const vector<int>& v1, const vector<int>& v2){
    return v1[1] < v2[1];
}
void solve(){

    int n,k; cin >> n>> k;
    vector<ll>h(n);
    vector<ll>p(n);
    for(int i=0 ; i<n ; i++) cin >> h[i];
    for(int i=0 ; i<n ; i++) cin >> p[i];
    multiset<ll> mins;
    for(int i=0 ; i<n ; i++) mins.insert(p[i]);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> mnpq;
    for(int i=0 ; i<n ; i++) mnpq.push({h[i], i});
    
    bool ok = false;
    ll totalReduce = 0;
    while(k > 0){
        totalReduce += k ; 
        while (!mnpq.empty()){
        {
            ll c
        }
        
    }
}
int main(){

    nfs test

    return 0;
}