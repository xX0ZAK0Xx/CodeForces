#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>> n;
        string a;
        cin>> a;

        ll box[n];
        for(ll i=0; i<n; i++){
            cin>> box[i];
        }
        ll ans = 0, min_v;
        for(int i=n-1 ; i>=0 ;){
            if(a[i]=='1'){
                min_v = box[i];
                while(i>=0){
                    min_v = min(min_v, box[i]);
                    if(a[i]=='1'){
                        ans = ans + box[i];
                        i--;
                    }else{
                        ans = ans + box[i];
                        i--;
                        ans = ans - min_v;
                        break;
                    }
                }
            }else{
                i--;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}