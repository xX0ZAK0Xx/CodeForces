#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool possible(vector<int> a, int n, int k) {
    multiset<int> s;
    for(auto i:a){
        s.insert(i);
    }

    for(int i=1 ; i<=k ; i++){
        if(s.empty()){
            return false;
        }
        int req = k-i+1;
        auto ii = s.upper_bound(req);
        if(ii==s.begin()){
            return false;
        }
        ii--;
        s.erase(ii);
        if(!s.empty()){
            ii = s.begin();
            ll v = *ii;
            v+=req;
            s.erase(ii);
            s.insert(v);
        }
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>> a[i];
        }
        int k;
        int low = 0, high = n;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(possible(a,n,mid)){
                k = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        cout<<k<<"\n";
    }

    return 0;
}