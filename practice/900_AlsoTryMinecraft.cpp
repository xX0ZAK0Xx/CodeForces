#include<iostream>
#include<math.h>

using namespace std;

const int N=1e5+10;

int m,n;
long long h[N],d[N],pre[N],suf[N];

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	for(int i=2;i<=n;i++){
		pre[i]=pre[i-1];
		if(h[i-1]>h[i]) pre[i]+=h[i-1]-h[i];
	}
	for(int i=n-1;i>=1;i--){
		suf[i]=suf[i+1];
		if(h[i+1]>h[i]) suf[i]+=h[i+1]-h[i];
	}
	while(m--){
		int a,b;
		cin>>a>>b;
		if(a>b) cout<<suf[b]-suf[a]<<endl;
		else cout<<pre[b]-pre[a]<<endl;
	}
	return 0;
}
