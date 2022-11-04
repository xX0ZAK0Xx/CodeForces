#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--) {
        ll n; cin>>n;
        
        if(n==1){
            cout<<"1\n1 2\n";
        }else {
            int ans = 1;
            if(n>2) ans = n-1;
            cout<<ans<<"\n2 6\n";
            if(n>2){
                ll x = 4, y = 9;
                for(ll i=1 ; i<ans ; i++){
                    cout<<x<<" "<<y<<"\n";
                    x++;
                    y+=3;
                }
            }
        }
    }

    return 0;
}//wrong at pretest 2