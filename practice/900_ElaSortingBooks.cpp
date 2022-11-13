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
        int n, k; cin  >> n >> k;
        string s; cin  >> s;
        map<char,int> freq;
        for(int i=0 ; i<n ; i++){
            freq[s[i]]++;
        }
        string ans = "";
        for(int i=1 ; i<=k ; i++){
            int length = n/k;
            for(char ch = 'a'; ch <= 'z' ; ch++){
                if(length<=0){
                    ans += ch;
                    break;
                }
                length--;
                if(freq[ch]){
                    freq[ch]--;
                }
                else{
                    ans += ch;
                    break;
                }
            }
        }
        print(ans)    
    }
    return 0;
}