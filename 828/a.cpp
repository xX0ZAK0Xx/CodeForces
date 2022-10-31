#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin >> n;
    unordered_map<int, char> num;
    string str;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        num.insert(pair<int, char>(arr[i], '-'));
    }
    cin>>str;
    for(int i=0; i<n; i++){
        if(num[arr[i]]=='-'){
            num[arr[i]]=str[i];
        }else if(num[arr[i]]!=str[i]){
            return 0;
        }
    }
    return 1;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        if(solve()){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}