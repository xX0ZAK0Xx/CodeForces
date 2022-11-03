#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;      cin>>n;
    string s;   cin>>s;

    if(count(s.begin(), s.end(), '0')==n){
        cout<<0<<"\n";
    }else{
        ll start = 0;
        for(ll i=0 ; i<n ; i++){//finding the 1st one
            if(s[i]=='1'){
                start = i;
                break;
            }
        }

        ll len = n-start;
        string s1 = s.substr(start, len);//removing leading zeroes
        string ans = s1;
        
        ll zeroPos = n;
        for(ll i=start ; i<n ; i++){//finding 1st zero in s1
            if(s[i]=='0'){
                zeroPos = i;
                break;
            }
        }

        ll diff = zeroPos - start;//2-0 = 2
        ll len2 = len - diff;//5-2 = 3
        for(ll i=start ; i+len2 < n ; i++){
            string temp = s1;
            for(ll j=0 ; j<len2 ; j++){
                temp[diff+j] = max(temp[diff+j],s[i+j]);
            }
            ans = max(ans, temp);
        }
        cout<<ans<<"\n";
    }
    return 0;
}//https://www.youtube.com/watch?v=I2uSCmPc3Bs