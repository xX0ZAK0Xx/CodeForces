#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(s1[i]==s2[i] || (s1[i]+s2[i])==137) {
                flag = false;
                // cout<<"F ";
            }else{
                flag = true;
                // cout<<"T ";
                break;
            }
        }
        if(flag){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}