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
    int arr[4], temp[4];
    for(int i=0 ; i<4 ; i++){
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp, temp+4);
    if(temp[0]==arr[0] && temp[3]==arr[3]){
        print("YES")
    }else if(temp[0]==arr[1] && temp[3]==arr[2]){
        print("YES")
    }else if(temp[0]==arr[2] && temp[3]==arr[1]){
        print("YES")
    }else if(temp[0]==arr[3] && temp[3]==arr[0]){
        print("YES")
    }else{
        print("NO")
    }

}
int main(){

    nfs test

    return 0;
}