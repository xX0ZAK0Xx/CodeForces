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
        string s; cin  >> s;
        bool flag = true;
        for(int i=0 ; i< s.length() - 1 ; i++){
            if(s[i]=='Y' && s[i+1]=='e') continue;
            else if(s[i]=='e' && s[i+1]=='s') continue;
            else if(s[i]=='s' && s[i+1]=='Y') continue;
            else if(s[i]!='Y' && s[i] != 'e' && s[i] != 's'){
                flag = false;
                break;
            } 
            else{
                flag = false;
                break;
            }
        }
        if(s.length()==1 && ( s[0]!='Y' && s[0] != 'e' && s[0] != 's')){
            flag = false;
        }
        if(flag) print("YES")
        else print("NO");
    }

    return 0;
}