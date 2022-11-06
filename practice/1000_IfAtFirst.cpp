// https://codeforces.com/problemset/problem/991/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    if(c>a || c >b || c>n || a>n || b>n) cout<<"-1\n";
    else if(a + b - c < n) cout<< n-(a+b-c) << endl;
    else cout<< "-1\n";

    return 0;
}