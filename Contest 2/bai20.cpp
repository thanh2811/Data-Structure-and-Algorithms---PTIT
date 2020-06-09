/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,a[20];

void Try(int a[],int n){
	if(n==1) return;
	int t[n+2];
	for(int i=1;i<n;i++){
		t[i]=a[i]+a[i+1];
	}
	Try(t,n-1);
	cout<<"[";
	for(int i=1;i<n;i++){
		t[i]=a[i]+a[i+1];
		cout<<t[i];
		if(i!=n-1) cout<<" ";
	}
	cout<<"]";
}

void Res(){
	cin>>n;
	int k=n;
	For(i,1,n) cin>>a[i];
	Try(a,n);
	cout<<"[";
	For(i,1,k-1) cout<<a[i]<<" ";
	cout<<a[k]<<"]\n";	
}
int main(){
	IOS;
	int test = 1;
	cin>>test;
	while(test--){
		Res();
	}
}