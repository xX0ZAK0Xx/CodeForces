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
        int n; cin  >> n;
        int arr[n];
        int temp[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
            temp[i] = arr[i];
        }
        if(n==1){
            print(-1)
            continue;
        }
        // if(is_sorted(arr,arr+n))
        int taken[n+1]={0};
        // sort(arr,arr+n);
        for(int i=0 ; i<n-2 ; i++){
            int j=1;
            while(taken[j] || j==arr[i]) j++;
            cout<<j<<" ";
            taken[j]=1;
        }

        int a=-1, b=-1;
        for(int i=1 ; i<=n ; i++){
            if(!taken[i]){
                if(a==-1) a=i;
                else b=i;
            }
        }
        if(a!=arr[n-2] && b!=arr[n-1]) cout<<a<<" "<<b<<endl;
        else cout<<b<<" "<<a<<endl;
    }

    return 0;
}