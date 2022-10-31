#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r){
    if(n<r) return 0;
    if((n-r)<r) r = n-r;
    int mod = 1000000007;
    int dp[r+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i=1 ; i<=n ; i++){
        for(int j=min(r,i); j>0 ; j--){
            dp[j] = (dp[j] + dp[j-1]) % mod;
        }
    }
    return dp[r];
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
        }
        cout<< ncr((10-n),2) * 6 <<endl ;
    }

    return 0;
}