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
bool solve(string s){
    // bool flag = false;
    // int ctr = 0;
    // for(int i=0 ; i<s.length()-1 ; i++){
    //     if(s[i]==s[i+1]){
    //         ctr++;
    //     }else{
    //         ctr=0;
    //     }
    //     if(ctr>=7){
    //         return true;
    //     }
    // }
    // return false;
    size_t found = s.find("0000000");
    if(found!=string::npos){
        return true;
    }else{
        found = s.find("1111111");
        if(found!=string::npos){
            return true;
        }
        return false;
    }
}
int main(){

    string s; cin>>s;

    if(solve(s)){
        print("YES")
    }else{
        print("NO")
    }


    return 0;
}