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
    ll n, m,k; cin >> n >> m >> k;
    ll arr[m];
    for(ll i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr, arr+m);
    ll i=0, j=m-1;

    while(i<j){
        int left = k / 2.0, right = k-left;
        while(i<j && left){
            if(arr[i] >= 0){
                arr[i]--;
                left--;
            }
            i++;
            // printarray(arr)
        }
        if(left){
            print("NO")
            return;
        }
        while(i<j && right){
            if(arr[j] >= 0){
                arr[j]--;
                right--;
            }
            j--;
            // printarray(arr)
        }
        if(right){
            print("NO")
            return;
        }
        i=0, j=m-1;
    }
    // printarray(arr)
    print("YES")
}
int main(){

    nfs test;

    return 0;
}