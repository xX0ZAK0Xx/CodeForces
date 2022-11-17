#include <bits/stdc++.h>
#define nfs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)
#define print(n) cout<<(n)<<"\n";
#define printarray(arr) for(auto xx: (arr) ){cout<<xx<<" ";} cout<<"\n";
#define print2darray(arr) for(auto yy: (arr)){printarray(yy)}
#define ll long long int
#define  d2vec(name, row, col, fill) vector<vector<int>> (name) ((row), vector<int>((col),(fill)));
#define  D2vec(name, row, col, fill) vector<vector<ll>> (name) ((row), vector<ll>((col),(fill)));
#define rowfill(arr, col, val) for(ll xx=0 ; xx<(col) ; xx++){ arr[0][xx]=(val);}
#define colfill(arr, row, val) for(ll xx=0 ; xx<(row) ; xx++){ arr[xx][0]=(val);}
using namespace std;
int main(){

    nfs test{
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        double frac1 = (float)a/b;
        double frac2 = (float) c/d;
        // cout<< frac1<<" "<< frac2<<endl;
        if(frac1 == frac2){
            print(0)
        }else if((a==0 && c!=0) || (a!=0 && c==0) ){
            print(1)
        }
        else{
            // double m = min(frac1, frac2);
            // double n = max(frac1, frac2);
            // cout << m << " " << n << endl;
            if((a*d) > (b*c)){
                if((a*d) % (b*c) == 0){
                    print(1)
                }else{
                    print(2)
                }
            }
            else{
                if((b*c) % (a*d) == 0){
                    print(1)
                }else{
                    print(2)
                }
            }
        }    
    }
    return 0;
}