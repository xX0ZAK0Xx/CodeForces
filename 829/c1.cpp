#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n;  cin>>n;
        vector<int> a(n);
        for(int i=0; i<n ; i++) cin>>a[i];
        if(n&1){
            cout<<"-1\n";
            continue;
        }
        vector <pair<ll,ll>> s;
        for(int i=0; i<n-1; i+=2){
            if(a[i]==a[i+1]) s.push_back(pair<ll,ll>(i+1, i+2));
            else{
                s.push_back(pair<ll,ll>(i+1, i+1));
                s.push_back(pair<ll,ll>(i+2, i+2));
            }
        }

        cout<<s.size()<<"\n";
        for(auto x:s){
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }

    return 0;
}//https://www.youtube.com/watch?v=uDWendhlTa4