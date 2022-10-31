#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int t;
    cin >> t;
    while (t--){
        int a,b,c;
        cin >>a>>b>>c;
        if(a==(b+c) || c==(b+a) || b==(a+c)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
 
    return 0;
}