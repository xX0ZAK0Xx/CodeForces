#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n; cin>> n;
        ll arr[n];
        set <ll> s;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(arr[0]==1){
            cout<<"Bob\n";
        }else{
            bool alice = false;
            for(int i=1 ; i<n ; i++){
                if(arr[i]==1){
                    alice = true;
                    break;
                }
            }
            if(alice){
                cout<<"Alice\n";
            }else{
                if(arr[0]==*s.begin()){
                    cout<<"Bob\n";
                }else{
                    cout<<"Alice\n";
                }
            }
            
        }
        
    }

    return 0;
}