#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n,q;
    cin >> n >> q;
    ll sum = 0;
    vector <ll> a(n), b(2);
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
        b[a[i]&1]++;
    }
    for(int i=0; i<q ; i++){
        int x,y;
        cin>>x>>y;
        sum += y*b[x];
        if(y&1){
            b[1-x] += b[x];
            b[x] = 0;
        }
        cout<<sum<<"\n";
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