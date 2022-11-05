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
        
        if(n&1){
            cout<<(n/2)+1<<"\n";
            int i=1, j=3*n;
            for(int k=0 ; k<n/2 ; k++){
                cout<<i<<" "<<j<<"\n";
                i+=3; j-=3;
            }
            cout<<2<<" "<<j<<"\n";
        }else{
            cout<<n/2<<"\n";
            int i=1, j=3*n;
            for(int k=0 ; k<n/2 ; k++){
                cout<<i<<" "<<j<<"\n";
                i+=3; j-=3;
            }
        }
    }

    return 0;
}