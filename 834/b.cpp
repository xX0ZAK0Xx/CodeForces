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
        int m, s; cin  >> m >> s;
        int arr[100] = {0};
        int mm = 0;
        for(int i=0 ; i<m ; i++){
            int num; cin >> num;
            arr[num]++;
            mm = max(mm, num);
        }
        int i = 0;
        bool flag = true;
        while(s!=0){
            if(arr[i]==0){
                s-=i;
                if(s<0){
                    print("NO")
                    flag = false;
                    break;
                }
                else{
                    mm = max(mm, i);
                    arr[i]++;
                }
            }
            i++;
        }
        bool pos = true;
        if(flag){
            for(int i=0; i<=mm ; i++){
                if(arr[i]==0){
                    print("NO")
                    pos = false;
                    break;
                }
            }
            // for(int i=0; i<=mm ; i++){
            //     cout<<arr[i]<<" ";
            // }cout<<"\n";
            if(pos) print("YES")
        }
    }

    return 0;
}