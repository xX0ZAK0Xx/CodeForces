#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0;
    for (int i=0;i<s.size();i++){
        if ((s[i]>='A')&&(s[i]<='Z')){
            x++;
        }
    }
    int y = s.size()-x; 
    if (x<=y){
        for (int i=0;i<s.size();i++){
            if ((s[i]>='A')&&(s[i]<='Z')){
                s[i]=s[i]+'a'-'A';
            }
        }
    } else {
        for (int i=0;i<s.size();i++){
            if ((s[i]>='a')&&(s[i]<='z')){
                s[i]=s[i]+'A'-'a';
            }
        }
 
    }
    cout<<s<<endl; 
    return 0;
}