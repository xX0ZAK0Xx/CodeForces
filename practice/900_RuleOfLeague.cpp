#include <bits/stdc++.h>
#define nfs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)
#define print(n) cout<<(n)<<"\n";
#define printarray(arr) for(auto xx: (arr) ){cout<<xx<<" ";} cout<<"\n";
#define print2darray(arr) for(auto yy: (arr)){printarray(yy)}
#define ll long long int
#define  d2vec(name, row, col, fill) vector<vector<int>> (name) ((row), vector<int>((col),(fill)));
#define  D2vec(name, row, col, fill) vector<vector<ll>> (name) ((row), vector<ll>((col),(fill)));
#define rowfill(arr, col, val) for(ll xx=0 ; xx<(col) ; xx++){ arr[0][xx]=(val);}
#define colfill(arr, row, val) for(ll xx=0 ; xx<(row) ; xx++){ arr[xx][0]=(val);}
using namespace std;
int main(){

    nfs test{
        int n, x, y;
        cin >> n >> x >> y;

        // while (n--){
        if(x>=1 && y>=1){
            print(-1)
        }
        else if(x || y){
            int val = max(x,y);//2
            if((n-1) % val == 0){
                int ans = 1;// 1
                for(int i=1 ; i<n ; i++){// i = 1, 2
                    for(int j=1 ; j<=val ; j++){
                        // cout<<i << "  "<< j<< endl;
                        cout<<ans<<" ";
                        i++;
                        // cout<<i << "  "<< j<< endl;
                    }
                    ans = i+1;
                    // cout<< i << endl;
                    i--;
                }
                cout<<endl;
            }
            else{
                print(-1)
            }
            
        }else{
            print(-1)
        }
        // }
    }

    return 0;
}
/*
3 1 2

1 2 3
 1 3


*/