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
        for(int i = 0 ; i < n ; i++) cin >> arr[i];

        if(is_sorted(arr,arr+n)){
            print(0)
            continue;
        }

        map<int,int> nums;

        for(int i = 0 ; i < n ; i++){
            if(nums.find(arr[i])==nums.end()){
                nums[arr[i]] = i;
            }
        }
        int ans = nums.size();
        
        int idx;
        for(int i=n-1 ; i>0 ; i--){
            if(arr[i] < arr [i-1]){
                idx = i-1;
                break;
            }
        }

        set <int> saved;
        for(int i=n-1 ; i>idx ; i--){
            if(nums[arr[i]] <= idx){
                break;
            }
            saved.insert(arr[i]);
        }

        ans -= saved.size();
        print(ans)
    }

    return 0;
}