#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=1 ; i<=n ; i++) {
            cin >> a[i];
        }
        vector <int> ans (n+1, -1);
        set<int> s;
        for(int i=1 ; i<=n ; i++){
            s.insert(i);
        }

        int mx = a[1];
        for(int i=2 ; i<=n ; i++){
            if(a[i] > mx){
                mx = a[i];
            }
            else{
                int v = mx-a[i];
                auto it = s.lower_bound(v);
                ans[*it] = i;
                s.erase(it);
            }
        }
        for(int i=1 ; i<=n ; i++){
            if(ans[i]==-1){
                ans[i] = 1;
            }
        }
        for(int i=1 ; i<=n ; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }

    return 0;
}//https://www.youtube.com/watch?v=KgLJvOZP2yg