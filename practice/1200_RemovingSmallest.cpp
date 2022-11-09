#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        ll n; cin  >> n;
        string s; cin >> s;

        ll ans = 0;
        string marked(n, '1');

        for(ll i=0; i< n; i++){
            if(s[i]=='0'){
                for(ll j=i+1 ; j<=n ; j+=i+1){
                    if(s[j-1]== '1') break;
                    if(marked[j-1] == '0') continue;
                    marked[j-1] = '0';
                    ans += i+1;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
// https://www.youtube.com/watch?v=EZLKYkppDuw