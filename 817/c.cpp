#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<string, int> words;
        string persons[3][n];
        for(int i=0; i<3 ; i++){
            for(int j=0; j<n; j++){
                string x;
                cin >> x;
                persons[i][j] = x;
                words[x]++;
                
            }
        }
        for(int i=0 ; i<3 ; i++){
            int score = 0;
            for(int j=0 ; j<n ; j++){
                if( words[persons[i][j]] == 1) {
                    score += 3;
                }else if( words[persons[i][j]] == 2){
                    score += 1;
                }
            }
            cout << score << " ";
        }
        cout<<"\n";
    }

    return 0;
}