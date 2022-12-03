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

ll inv(int arr[], int n){
    ll ctr = 0, ans=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(arr[i] == 0){
            ctr += 1;
        }else{
            ans += ctr;
        }
    }
    return ans;
}

int main(){

    nfs test{
        int n; cin  >> n;
        int arr[n];
        int zeroPos=0, onePos=0;
        bool zero = false;
        
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
            if(arr[i] == 0 && zero==false){
                zeroPos = i;
                zero = true;
            }else if(arr[i] == 1){
                onePos = i;
            }
        }
        ll ans = inv(arr, n);

        int idx = -1;
        for(int i = 0; i < n; i++){
            if(arr[i]==0){
                arr[i] = 1;
                idx = i;
                break;
            }
        }
        ans = max(ans, inv(arr, n));
        if(idx != -1){
            arr[idx] = 0;
        }

        for(int i= n-1 ; i >= 0; i--){
            if(arr[i]==1){
                arr[i] = 0;
                break;
            }
        }

        // onePos = n - onePos -1;// reverse position
        // if( (n-onePos-1) < zeroPos){
        //     arr[onePos] = 0;
        // }else{
        //     arr[zeroPos] = 1;
        // }
        // arr[zeroPos] = 1;
        // arr[zeroPos] = 0;
        // arr[onePos] = 0;
        ans = max(ans, inv(arr, n));

        print(ans)
    }

    return 0;
}