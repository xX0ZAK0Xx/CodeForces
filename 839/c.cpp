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
    int k,n; cin  >> k >> n;
    int arr[k]={1};
    int inc = 1, cur = 2;
    bool flag = true;
    for(int i=1 ; i<k ; i++){
        if(flag){
            if((n-cur) >= k-i-1){
                arr[i] = cur;
                inc++;
                cur += inc;
            }else{
                flag = false;
                arr[i] = arr[i-1]+1;
            }
        }else{
            arr[i] = arr[i-1]+1;
        }
    }
    printarray(arr)
}
int main(){

    nfs test

    return 0;
}