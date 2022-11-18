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
        ll ans = 0;
        ll pos = a;
        bool flag = true;
        while(pos != b){
            if(pos+x <= b){
                pos = pos+x;
                ans ++;
            }
            else if(b+x <= r){// 6-> 12 -> 7
                pos = b;
                ans+=2;
            }
            else if(b-x >= l){//8 -> 2 -> 7
                pos = b;
                ans+=2;
            }
            else{
                ans = -1; break;
            }
        }
        print(ans)
    }

    return 0;
}