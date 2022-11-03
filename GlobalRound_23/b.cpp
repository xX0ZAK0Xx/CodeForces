#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;      cin>>n;
        int arr[n];
        int ones=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]) {
                ones++;
            }
        }
        int ctr = 0;
        for(int i=n-ones ; i<n ; i++) {
            if(arr[i]!=1){
                ctr++;
            }
        }

        cout<<ctr<<"\n";
    }

    return 0;
}