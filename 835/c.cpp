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
        int n; cin >> n;
        int arr[n], arr2[n];
        int m = 0, m2 = 0;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        // if(m2==0) m2 = m;
        // int arr2[n] = arr[n];
        sort(arr, arr+n);
        m = arr[n-1]; m2 = arr[n-2];
        // printarray(arr)
        // printarray(arr2)
        // cout<<m<<" "<<m2<<endl;
        for(int i=0 ; i<n ; i++){
            if(arr2[i]==m){
                cout<<arr2[i] - m2 <<" ";
            }else{
                cout<<arr2[i] - m <<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}