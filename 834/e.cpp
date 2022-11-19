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
        ll n,h ; cin  >> n >> h;
        vector<ll> arr(n);
        for(int i=0 ; i<n ; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        vector<ll> m = {2,2,3};
        ll ans = 0;
        do{
            ll temp = 0, th = h, mi=0;
            for(int i=0 ; i<n ; i++){
                if(th > arr[i]){
                    temp++;
                    th += arr[i]/2;
                }else{
                    if(mi==3) break;
                    while(mi < 3 && th <= arr[i]){
                        th *= m[mi++];
                    }
                    if(th <= arr[i]) break;
                    else{
                        temp++;
                        th += arr[i]/2;
                    }
                }
            }
            ans = max(ans, temp);
        }while(next_permutation(m.begin(), m.end()));
        print(ans)
    }

    return 0;
}
//https://www.youtube.com/watch?v=c2ABjppU96Y