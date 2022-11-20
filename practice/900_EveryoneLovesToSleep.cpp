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
        int n, h, m; cin >> n >> h >> m;
        int h1 = 60*h + m;
        int ans = 1440;
        for(int i=0; i<n; i++){
            int hh, mm; cin >> hh >> mm;
            int timeDiff = 60*hh+mm - h1;
            if(timeDiff<0){
                timeDiff += 1440;
            }
            ans = min(ans,timeDiff);
        }
        cout<<ans/60<<" "<<ans%60<<endl;

    }
    

    return 0;
}