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

    nfs test{
        ll l, r, x, a, b; cin >> l >> r >> x >> a >> b;
        if(a==b){
            print(0)
        }else if(a<b){
            if(b-a >= x) print(1)
            else if(r-b >= x || a-l >= x) print(2)
            else if(r-a >= x && b-l >= x) print(3)
            else print(-1)
        }else{
            if(a-b >= x) print(1)
            else if(r-a >= x || b-l >= x) print(2)
            else if(r-b >= x && a-l >= x) print(3)
            else print(-1)
        }
    }

    return 0;
}