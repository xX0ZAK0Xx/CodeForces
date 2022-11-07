#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        
        ll n; cin>> n;
        ll res = 0;
        vector<ll> v;

        for(ll i=1 ; i<=n ; i++){
            ll x; cin>> x;
            while(x%2==0){
                res++;
                x/=2;
            }
            ll cur = i;
            ll temp = 0;
            while(cur%2==0){
                temp++;
                cur/=2;
            }
            v.push_back(temp);
        }

        sort(v.rbegin(), v.rend());

        if(res >= n) cout<<0<<endl;
        else{
            ll ans = 0;
            for(int i=0 ; i<v.size() ; i++){
                res += v[i];
                ans ++;
                if(res >= n){
                    cout<<ans<<endl;
                    break;
                }
            }
            if(res<n) cout<<-1<<endl;
        }
    }

    return 0;
}