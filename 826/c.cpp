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
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int totalSum = 0;
        for(int i=0; i<n; i++) totalSum += v[i];

        int temp = 0, mini = n, count = 0;

        for(int i=0; i<n; i++){
            temp += v[i];
            count++;
            int baseLength = 0;
            if(totalSum%temp==0){
                baseLength = count;//1
                int tempSum = 0, newSegLength = 0;
                for(int j=i+1; j<n ; j++){
                    tempSum += v[j];
                    newSegLength++;//4
                    if(tempSum == temp){
                        baseLength = max(baseLength, newSegLength);
                        tempSum = 0;
                        newSegLength = 0;
                    }
                }
                if(tempSum == 0){
                    mini = min(mini, baseLength);
                }
            }
        }
        cout<<mini<<endl;
    }

    return 0;
}