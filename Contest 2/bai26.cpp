/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
string s,ans,res;
int n,k;
void Try(string &ans,int d){
	if(d==0) {
		// cout<<ans<<" ";
		return;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i]<s[j]) {
				swap(s[i],s[j]);
				ans=max(ans,s);
				Try(ans,d-1);
				swap(s[i],s[j]);
			}
		}
	}
}

void Res(){
	cin>>k>>s;
	string ans=s;
	n=s.length();
	Try(ans,k);
	cout<<ans<<endl;
}
int main(){
	IOS;
	int test = 1;
	cin>>test;
	while(test--){
		Res();
	}
}