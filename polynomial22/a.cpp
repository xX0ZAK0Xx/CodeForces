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
    string str; cin >> str;
    int c=0;
    string ans = "";
    for(int i=0; i<n; i++){
        if(str[i] == '1'){
            if(i==0){
                c=1;
            }else{
                if(c){
                    ans+='-';
                }else{
                    ans+='+';
                }
                c ^= 1;
            }
        }else if(i>0){
            ans += '+';
        }
    }
    print(ans)
}
int main(){

    nfs test

    return 0;
}