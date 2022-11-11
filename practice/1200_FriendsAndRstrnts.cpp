#include <bits/stdc++.h>
#define nfs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)
#define print(n) cout<<(n)<<'\n';
#define ll long long int
using namespace std;
int main(){

    nfs
    test{
        int n;      cin>> n;
        vector<ll> x(n), y(n), diff(n);
        for(int i=0; i<n; i++) cin>> x[i];
        for(int i=0; i<n; i++){
            cin>> y[i];
            diff[i] = y[i] - x[i];
        }

        sort(diff.begin(), diff.end());
        reverse(diff.begin(), diff.end());

        ll j = n-1, ans = 0;
        for(ll i=0 ; i<n; i++){
            while(j>i && diff[i]+diff[j] < 0){
                j--;
            }
            if(j<=i) break;
            else{
                ans++;
                j--;
            }
        }
        print(ans)
    }

    return 0;
}