#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n+1);
        for(int i=1 ; i<=n ; i++){
            cin>>a[i];
        }
        vector<bool> dp(n+1, false);
        dp[0] = true;

        for(int i=1 ; i<=n ; i++){
            if(i-a[i]-1>=0 && dp[i-a[i]-1]==true){
                dp[i] = true;
            }
            if(i+a[i]<=n && dp[i-1]==true){
                dp[i+a[i]] = true;
            }
        }
        if(dp[n]==true){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
//https://www.youtube.com/watch?v=zP8v8ztEwBM