#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n);
        int ones = 0;
        for(int i = 0; i < n; i++){
            cin>> a[i];
            ones += abs(a[i]);
        } 
        if(ones == 0){
            cout<<"1\n1 "<<n<<"\n";
            continue;
        }
        if(ones&1){
            cout<<"-1\n";
            continue;
        }
        vector <pair<int,int>> ans;
        int segSum =0, prev1 = -1, parity = 1, segStart = 0;
        for(int i=0; i<n ; i++){
            if(parity){
                segSum += a[i];
            }else{
                segSum -= a[i];
            }
            parity ^= 1;// 1->0 or 0->1
            if(a[i]!=0){
                if(prev1==-1){
                    prev1 = i;
                }else{
                    if(a[i]!=0 && prev1 != -1){//
                        if(segSum==0){
                            ans.push_back({segStart, i});
                            prev1 = -1;
                            segStart = i+1;
                            parity = 1;
                            continue;
                        }
                        if(a[segStart]==0){
                            if((i-prev1 + 1)%2==0){
                                ans.push_back({segStart, prev1-1});
                                ans.push_back({prev1, i-1});
                                ans.push_back({i, i});
                                prev1 = -1;
                                segStart = i+1;
                            }
                            else{
                                ans.push_back({segStart, prev1-1});
                                ans.push_back({prev1, prev1});
                                ans.push_back({prev1+1,i});
                                prev1 = -1;
                                segStart = i+1;
                            }
                            segSum = 0;
                        }else{
                            if((i-prev1 + 1)%2==0){
                                ans.push_back({prev1, i-1});
                                ans.push_back({i,i});
                                prev1 = -1;
                                segStart = i+1;
                            }else{
                                ans.push_back({prev1, prev1});
                                ans.push_back({prev1+1, 1});
                                prev1 = -1;
                                segStart = i+1;
                            }
                            segSum = 0;
                        }
                        parity = -1;
                    }//
                }
            }
        }
        if(a[n-1]==0){
            ans.push_back({n-1, n-1});
            for(int i=n-1 ; a[i]==0 ; i--){
                ans.back().first= i;
            }
        }
        cout<<ans.size()<<"\n";
        for(auto i: ans){
            cout<<(i.first+1)<<" "<<(i.second+1)<<"\n";
        }
    }

    return 0;
}//wrong
