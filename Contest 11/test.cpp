#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
	int x,y,n;
	cin>>x>>y>>n;
	int ans = ((n/x)*x+y);
	if(ans>n) ans -= x;   
	cout<<ans<<'\n';	
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int test = 1;
	cin>>test;
	while(test--){
		Res();
	}
}