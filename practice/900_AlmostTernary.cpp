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
        int n,m; cin  >> n >> m ;
        // int n = 6, m = 8;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(i&1){
                    if((((i+j))/2)&1){
                        cout<<"1 ";
                    }else{
                        cout<<"0 ";
                    }
                }else{
                    if((((i+j+3))/2)&1){
                        cout<<"1 ";
                    }else{
                        cout<<"0 ";
                    }
                }
            }
            cout<<"\n";
        }
    }

    return 0;
}