#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int q = 0;
        for(int i = 0; i < n; i++){
            if(str[i]=='Q'){
                q++;
            }else if(q==0){
                continue;
            }else{
                q--;
            }
        }
        if(q==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}