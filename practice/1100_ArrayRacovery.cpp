#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n; cin  >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int ans[n]={0};
        ans[0] = arr[0];
        // for (int i = 0; i < n; i++){
        //     cout<<ans[i]<<" ";
        // }cout<<endl;
        bool flag = false;
        for(int i = 1; i < n; i++){
            if(ans[i-1] >= arr[i] && arr[i]!=0){
                cout<<"-1\n";
                flag = true;
                break;
            }else{
                ans[i] = arr[i]+ ans[i-1];
            }
        }

        if(!flag){
            for (int i = 0; i < n; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<< endl;
            
        }

    }

    return 0;
}