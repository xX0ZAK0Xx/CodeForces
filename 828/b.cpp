#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n,q;
    cin >> n >> q;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < q; i++){
        int j,k;
        cin >> j >> k;
        ll sum = 0;
        if(j==1){
            for(int l=0 ; l<n; l++){
                if(arr[l]&1){
                    arr[l]+=k;
                }
                sum += arr[l];
                // cout<<arr[l]<<" ";
            }
        }else if(j==0){
            for(int l=0 ; l<n; l++){
                if(!(arr[l]&1)){
                    arr[l]+=k;
                }
                sum += arr[l];
                // cout<<arr[l]<<" ";
            }
        }
        cout<<sum<<endl;
    }
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}