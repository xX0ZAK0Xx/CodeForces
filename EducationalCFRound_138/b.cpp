#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct monster{
    int hp;
    int power;
    int position;
};

bool comp(monster m1, monster m2){
    return m1.power < m2.power;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n];
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        vector<monster> v;
        for(int i=0; i<n; i++){
            monster m;
            m.hp = a[i];
            m.power = b[i];
            m.position = i;
            v.push_back(m);
        }
        sort(v.begin(), v.end(), comp);
        ll ans = 0;
        for(int i=0 ; i<n ; i++){
            if(a[v[i].position]!=0){
                ans += a[v[i].position];
                cout<<ans<<endl;
                a[v[i].position] = 0;

                for(int j=0 ; j<n ; j++) cout<<a[j]<<" "<<b[j]<<endl;
                
                if(v[i].position !=0 ){
                    a[v[i].position - 1] += b[v[i].position];
                }if(v[i].position != (n-1)){
                    a[v[i].position + 1] += b[v[i].position];
                }
            }
        }
        cout<<ans<<endl;
    }
//not complete
    return 0;
}