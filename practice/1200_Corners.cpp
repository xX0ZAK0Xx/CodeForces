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
        int n, m; cin >> n >> m ;
        int arr[n][m];
        int ones = 0;
        for(int i=0 ; i<n ; i++){
            string s; cin >> s;
            for(int j=0 ; j<m ; j++){
                arr[i][j] = s[j] - '0';
                ones += arr[i][j];
            }
        }
        int minOnesToRemove = INT_MAX;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=0 ; j<m-1 ; j++){
                int currentOnesInCube = arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i+1][j+1];
                if(currentOnesInCube) minOnesToRemove = min(minOnesToRemove, max(1, currentOnesInCube-1));
            }
        }

        if(ones == 0) print(0)
        else{
            print(ones - minOnesToRemove + 1)
        }
    }

    return 0;
}
/*
1	0	1
1	1	1
0	1	1
1	1	0

0	0	1
0	1	1
0	1	1
1	1	0

0	0	1
0	1	1
0	1	1
1	1	0


*/