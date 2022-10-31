#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int stoneX[n]={0}, stoneY[n]={0};
        vector<pair<int,int>> cells;
        for(int i=0 ; i<m ; i++){
            int x,y;
            cin >> x >> y;
            cells.push_back(pair<int,int>(x,y));
            stoneX[x-1] = 1;
            stoneY[y-1] = 1;
        }
        bool freeX = false, freeY = false, ans = false;
        for(int i=0 ; i<n ; i++){
            if(stoneX[i]==0){
                for(int j=0 ; j<n ; j++){
                    if(stoneY[j]==0){
                        ans = true;
                        break;
                    }
                }
            }
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;
}