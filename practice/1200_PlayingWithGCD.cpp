#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a, ll b){
    ll g = __gcd(a,b);
    return (a*b/g);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n; cin  >> n;
        vector <ll> a(n+2, 1);
        vector <ll> b(n+2, 1);

        for(int i=1; i<=n; i++) cin >> a[i];
        
        for(int i=1 ; i<=n+1 ; i++) b[i] = lcm(a[i], a[i-1]);

        bool flag = true;;
        for(ll i=1 ; i<=n ; i++){
            if(__gcd(b[i], b[i+1]) != a[i]){
                cout<<"NO\n";
                flag = false;
                break;
            }
        }

        if(flag) cout<<"YES\n";

    }

    return 0;
}