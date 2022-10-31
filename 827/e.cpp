#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n,q;
        cin >> n >> q;
        vector<ll> a(n+1, 0);
        for(int i=1 ; i<=n ; i++){
            cin >> a[i];
        }
        vector<ll> pref(n+1, 0);
        for(int i=1 ; i<=n ; i++){
            pref[i] = a[i] + pref[i-1];
        }
        vector<ll> ans(q);
        vector<pair<ll,int>>k(q);

        for(int i=0 ; i<q ; i++){
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        int ap = 0;
        for(int i=0 ; i<q ; i++){
            while(1){
                if(ap == n || a[ap+1]>k[i].first){
                    break;
                }
                ap++;
            }
            ans[k[i].second] = pref[ap];
        }
        for(int i=0 ; i<q ; i++){
            cout << ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}