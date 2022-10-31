#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<"1 "<<n<<" ";
        for(int i=2 ; i<n ; i++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}