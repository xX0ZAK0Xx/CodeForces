#include <bits/stdc++.h>
#define nfs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)
#define print(n) cout<<(n)<<"\n";
#define printarray(arr) for(auto xx: (arr) ){cout<<xx<<" ";} cout<<"\n";
#define print2darray(arr) for(auto yy: (arr)){printarray(yy)}
#define ll long long int
#define  d2vec(name, row, col, fill) vector<vector<int>> (name) ((row), vector<int>((col),(fill)));
#define  D2vec(name, row, col, fill) vector<vector<ll>> (name) ((row), vector<ll>((col),(fill)));
#define rowfill(arr, col, val) for(ll xx=0 ; xx<(col) ; xx++){ arr[0][xx]=(val);}
#define colfill(arr, row, val) for(ll xx=0 ; xx<(row) ; xx++){ arr[xx][0]=(val);}
using namespace std;

bool comp(int x, int y){
    return x>y;
}

int main(){

    ll n,q,x,y;
    cin >> n >> q;
    ll arr[n];
    for(int i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr, arr+n);
    ll pref[n+1]={0};
    // printarray(arr)
    for(int i=1; i<=n ; i++){
        pref[i] = arr[i-1] + pref[i-1];
    }

    // printarray(pref)
    while(q--){
        cin>>x>>y;
        // ll ans = 0;
        // for(int i=x-1 ; i>=x-y ; i-- ) ans += arr[i];
        // ans = pref[x] - pref[y-1];
        // print(ans)
        print( pref[n-x+y] - pref[n-x] )
    }

    return 0;
}