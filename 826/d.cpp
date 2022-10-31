#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int ans = 0;
vector <int> a;

void call(int l1, int r1, int l2, int r2){
    int maxL = 0;
    for(int i=l1 ; i<=r1 ; i++){
        maxL = max(maxL, a[i]);
    }
    int minR = INT_MAX;
    for(int i=l2 ; i<=r2 ; i++){
        minR = min(minR, a[i]);
    }

    if(maxL > minR){
        for(int i=l1, j=l2 ; i<=r1 ; i++, j++){
            swap(a[i], a[j]);
        }
        ans++;
    }

    if(l1==r1){
        return;
    }
    int mid1 = (l1+r1) / 2;
    int mid2 = (r2+l2) / 2;

    call(l1, mid1, mid1+1, r1);
    call(l2, mid2, mid2+1, r2);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        a.resize(n+1);
        for(int i=1 ; i<=n ; i++){
            cin>>a[i];
        }
        ans = 0;
        if(is_sorted(a.begin()+1, a.begin()+n+1)){
            cout<<"0\n";
            continue;
        }

        int mid = (n+1) / 2;
        call(1, mid, mid+1, n);

        if(is_sorted(a.begin()+1, a.begin()+n+1)){
            cout<<ans<<"\n";
        }else{
            cout<<"-1\n";
        }
    }

    return 0;
}
//https://www.youtube.com/watch?v=LrG6vM1VySs