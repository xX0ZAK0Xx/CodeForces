//https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    double n, m , a;
    cin >> n >> m >> a;
    ll ans = ceil(n/a) * ceil(m/a);
    cout << ans << endl;

    return 0;
}