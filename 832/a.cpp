#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n; cin>> n;
        vector <int> a(n);
        ll pos = 0, neg = 0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]>=0){
                pos += a[i];
            }else{
                neg += a[i];
            }
        }
        ll ans;
        if(abs(pos)>abs(neg)){
            ans = abs(pos)-abs(neg);
        }else{
            ans = abs(neg)-abs(pos);
        }

        cout<<ans<<"\n";

    }

    return 0;
}