#include <bits/stdc++.h>
#define nfs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)
#define print(n) cout<<(n)<<'\n';
#define printArray(n, m) for(int xx=0 ; xx<m ; xx++){cout<<n[xx]<<" ";} cout<<"\n";
#define ll long long int
using namespace std;
int main(){

    nfs test{
        string s; cin  >> s;
        int n = s.length();
        vector<pair<int,int>> vec(n-1);
        for(int i=1; i<n-1; i++){
            vec[i].first = s[i] - 'a' + 1;
            vec[i].second = i+1;
        }
        int dir ;
        if((s[0]-'a'+1) < (s[n-1]-'a'+1)){
            dir = 1;
        }else{
            dir = -1;
        }
        int mm = min((s[0]-'a'+1),(s[n-1]-'a'+1));
        int mx = max((s[0]-'a'+1),(s[n-1]-'a'+1));

        sort(vec.begin(), vec.end());
        if(dir == -1) reverse(vec.begin(), vec.end());
        
        vector <int> ans;
        ans.push_back(1);
        int ctr = 0;
        for(int i=0 ; i<n-1 ; i++){
            if(vec[i].first<= mx && vec[i].first>=mm){
                ans.push_back(vec[i].second);
                ctr++;
            }
        }
        ans.push_back(n);
        cout<<(mx-mm)<<" "<<ctr+2<<"\n";
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
