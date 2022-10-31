#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll minChange = 0, total = 0;
        vector <ll> change;
        ll pos = 0;
        for(int i = 0; i < n; i++) {
            ll l = i;
            ll r = n-i-1;
            if(s[i] == 'L'){
                if(r>l){
                    minChange++;
                    total+=r;
                    change.push_back(r-l);
                    pos++;
                }else{
                    total+=l;
                }
            }else{
                if(l>r){
                    minChange++;
                    total+=l;
                    change.push_back(l-r);
                    pos++;
                }else{
                    total+=r;
                }
            }
        }
        // change.pop_back();
        sort(change.begin(), change.end(), greater<ll>());
        vector <ll> ans(n+1);
        for(int i=minChange ; i<=n ; i++){
            ans[i] = total;
        }
        for(int i=minChange-1 ; i>=1 ; i--){
            total -= change.back();
            change.pop_back();
            ans[i] = total;
        }

        for(int i=1 ; i<=n; i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}
//https://www.youtube.com/watch?v=L5RAcY6w2d4