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
int main(){

    nfs
    ll n,d; cin>> n >> d;
    ll arr[n];
    for(ll i=0 ; i<n ; i++) cin>>arr[i];
    sort(arr, arr+n);

    ll i=0, j=n-1, ans=0;
    while(i<=j){
        int players = (d/arr[j]) + 1;// beacuse atlease one more power
        players--;//one player is [j]
        if(players>j-i){
            break;
        }
        ans++;
        j--;
        i+=players;
    }
    print(ans);
    return 0;
}