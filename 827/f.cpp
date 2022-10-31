#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int q;
        cin>>q;
         
        char mnS = 'a';
        char mxS = 'a';
        char mnT = 'a';
        char mxT = 'a';

        ll lenS = 1, lenT = 1;
        while(q--){
            ll d,k;
            cin>>d>> k;
            string x;
            cin>>x;

            ll lenX = x.size();
            if(d==1){
                char mn = *min_element(x.begin(), x.end());
                char mx = *max_element(x.begin(), x.end());
                mnS = min(mn, mnS);
                mxS = max(mx, mxS);
                lenS += lenX*k;
            }
            else if(d==2){
                char mn = *min_element(x.begin(), x.end());
                char mx = *max_element(x.begin(), x.end());
                mnT = min(mn, mnT);
                mxT = max(mx, mxT);
                lenT += lenX*k;
            }

            if(mxT > mnS){
                cout<<"YES\n";
            }else{
                if(mxS > 'a'){
                    cout<<"NO\n";
                }else{
                    if(lenS<lenT){
                        cout<<"YES\n";
                    }else{
                        cout<<"NO\n";
                    }
                }
            }
        }
    }

    return 0;
}