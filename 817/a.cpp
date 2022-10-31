#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<char> a;
        bool flag = false;
        if(n==5){
            int freq[5] = {0};
            for(int i=0 ; i<n ; i++){
                if(str[i]=='T' ||str[i]=='i' || str[i]=='m' ||str[i]=='u' || str[i]=='r' ){
                    a.insert(str[i]);
                }else{
                    flag = true;
                    break;
                }
            }
            if(a.size()!=5){
                flag = true;
            }
        }else{
            flag = true;
        }

        if(flag){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}