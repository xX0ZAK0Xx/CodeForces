#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){

        string tshirt1, tshirt2;
        cin >> tshirt1 >> tshirt2;
        int l1 = tshirt1[tshirt1.size()-1];
        int l2 = tshirt2[tshirt2.size()-1]; 
        if(l1>l2){
            cout<<"<\n";
        }else if(l1<l2){
            cout<<">\n";
        }else{
            if(l1==83)//S
            { 
                if(tshirt1.size() > tshirt2.size()) {
                    cout<<"<\n";
                }else if(tshirt1.size() < tshirt2.size()) {
                    cout<<">\n";
                }else{
                    cout<<"=\n";
                }
            }
            else if(l1==76)//L
            { 
                if(tshirt1.size() > tshirt2.size()) {
                    cout<<">\n";
                }else if(tshirt1.size() < tshirt2.size()) {
                    cout<<"<\n";
                }else{
                    cout<<"=\n";
                }
            }
            else cout<<"=\n";//M
        }
    }
    return 0;
}