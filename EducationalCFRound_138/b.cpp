#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n];
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        ll ans = 0;
        for(int i=0; i<n; i++){
            if(i==n-1){
                ans += a[i];
                break;
            }
            if(a[i]+(a[i+1]+b[i])<=a[i+1]+(b[i+1]+a[i])){
                ans += a[i];
                a[i+1] += b[i];
            }else{
                ans += a[i+1];
                a[i] += b[i+1];
                swap(a[i], a[i+1]);
                swap(b[i], b[i+1]);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}