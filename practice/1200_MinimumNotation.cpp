#include <bits/stdc++.h>
#define nfs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)
#define print(n) cout<<(n)<<'\n';
#define ll long long int

using namespace std;
int main(){

    nfs
    test{
        string s; cin  >> s;
        char c = '9';
        ll n = s.length();
        for(int i=n-1 ; i>=0 ; i--) {
            if(s[i] <= c) c = s[i];
            else s[i] = min(char(s[i]+1), '9');
        }
        sort(s.begin(), s.end());
        print (s)
    }

    return 0;
}