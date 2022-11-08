#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n,k; cin>> n >> k;
        vector<ll> s(n+1);
        for(int i= n-k+1 ; i<=n ; i++){
            cin >> s[i];
        }
        if(k==1){
            cout<<"YES\n"; continue;
        }
        vector<ll> a(n+1);
        for(int i= n-k+2 ; i<=n ; i++){
            a[i] = s[i] - s[i-1];
        }
        if(!std::is_sorted(a.begin()+n-k+2 , a.end())){
            cout<<"NO\n";  continue;
        }
        if(s[n-k+1] > a[n-k+2] * (n-k+1)){
                    //the maximum sum i can make 
            cout<<"NO\n";  continue;
        }
        cout<<"YES\n";
    }

    return 0;
}