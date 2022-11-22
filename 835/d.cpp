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
        int n; cin  >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
        int cnt=0 , cons=0, l=0;
        for(int i = 0 ; i < n ; i++){
            cons++;
            if(i == n-1){
                if(l==0 || arr[l-1] > arr[l]){
                    cnt++;
                }
            }else{
                if(arr[i+1]==arr[i]) continue;
                else if(arr[i+1] < arr[i]){
                    l = i+1;
                    cons = 0;
                }else{
                    if(l==0 || arr[l-1] > arr[l]){
                        cnt++;
                    }
                    l = i+1;
                    cons = 0;
                }
            }
        }
        if(cnt == 1){
            print("YES")
        }else{
            print("NO")
        }
    }

    return 0;
}