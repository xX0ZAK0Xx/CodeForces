#include <bits/stdc++.h>
using namespace std;
#define ll long long int
    
int main(){
    int t;
    cin >> t;
    while(t--){
        // cout<<t<<endl;
        int n;
        cin >> n;
        set<ll> s1;
        for(int i=0; i<n; i++){
            ll x;
            // cout<<i<<": ";
            cin >> x;
            s1.insert(x);
        }
        if(s1.size()==n){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}