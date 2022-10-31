#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        string s[8];
        int n = 8;
        for(int i = 0; i < n; i++){
            cin>>s[i];
        }
        char c = '.';
        for(int i = 0; i < n; i++){
            if(count(s[i].begin(), s[i].end(), 'R')==n ){
                c='R';
                break;
            }
        }
        if(c=='.'){
            for(int j=n-1 ; j >= 0 ; j--){
                bool flag = false;
                for(int i=0 ; i < n ; i++){
                    if(s[i][j] != 'B'){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    c='B';
                    break;
                }
            }
        }
        cout<<c<<"\n";
    }

    return 0;
}
//https://www.youtube.com/watch?v=yXJhW95mEe8