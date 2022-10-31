#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll area [1111][1111];
ll pref [1111][1111];
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n,q;
        cin>>n>> q;
        memset(area, 0LL, sizeof(area));
        memset(pref, 0LL, sizeof(pref));

        for(int i=0 ; i<n ; i++) {
            int h,w;
            cin>>h>>w;
            area[h][w] += h*w;
        }

        for(int i=1 ; i<=1000 ; i++){
            for(int j=1 ; j<=1000 ; j++){
                pref[i][j] = area[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
            }
        }

        while(q--){
            int hs, ws, hb, wb;
            cin >>hs>>ws>>hb>>wb;

            if(hb-hs==1 || wb-ws==1){
                cout<<"0\n";
                continue;
            }

            int fromRow = hs+1;
            int toRow = hb-1;
            int fromCol = ws+1;
            int toCol = wb-1;

            ll ans = pref[toRow][toCol] - pref[toRow][fromCol-1] - pref[fromRow-1][toCol] + pref[fromRow-1][fromCol-1];

            if(ans<0){
                ans = 0;
            }
            cout<<ans<<"\n";
        }
    }

    return 0;
}
//https://www.youtube.com/watch?v=BjuLgDdtTRs