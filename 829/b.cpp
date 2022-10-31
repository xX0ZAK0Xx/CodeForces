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
        if(n==2) cout<<"1 2\n";
        else if(n==3) cout<<"1 2 3\n";
        else {
            int x = n/2;
            if(n&1) x++;
            int y = n;
            for(int i=0; i<n; i++){
                if(i&1){
                    cout<<y--<<" ";
                }else{
                    cout<<x--<<" ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}