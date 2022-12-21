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

    int a,b,c; cin >> a >> b >> c;
    
    int aa = b - (c-b);
    if(aa >= a && aa%a == 0 && aa !=0 ){
        print("YES")
        return;
    }
    int bb = a + (c-a)/2;
    if(bb >= b && (c-a)%2==0 && bb%b==0 && bb!=0){
        print("YES")
        return;
    }
    int cc = a + 2*(b-a);
    if(cc >= c && cc%c==0 && cc!=0 ){
        print("YES")
        return;
    }

    print("NO")
    return;

}
int main(){

    nfs test

    return 0;
}