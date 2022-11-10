#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        int g = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(i==0) g = arr[i];
            else if(i==1) g = __gcd(arr[i-1], arr[i]);
            else g = __gcd(g, arr[i]);
        }
        if(g == 1 ){
            cout<<"0\n";  continue;
        }
        if(__gcd(g, n)==1){
            cout<<"1\n"; continue;
        }
        if(__gcd(g, n-1)==1){
            cout<<"2\n"; continue;
        }else{
            cout<<"3\n"; continue;
        }
        // cout<<g<<"\n";
    }

    return 0;
}