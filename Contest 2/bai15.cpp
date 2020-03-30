#include <bits/stdc++.h>
using namespace std;
 
int n,a[100];
void Out(){
	for(int i=0;i<n;i++) cout<<a[i];
}
void chuyenso(){
	string s;
	cin>>s;
	n=s.length();
	for(int i=0;i<n;i++) a[i]=s[i]-'0';
}
int hoanvi(int a[],int n){
	int i,j;
	i=n-2;
	while(i>=0 && a[i]>=a[i+1]) i--;
	if(i>=0){
		j=n-1;
		while(a[j]<=a[i]) j--;
		swap(a[i],a[j]);
		int d=i+1,c=n-1;
		while(d<=c){
			swap(a[d],a[c]);
			d++;c--;
		}
		return 1;
	}
	else return 0;
}
 
int main(){
	int k;
	cin>>k;
	while(k--){
		int x;
		cin>>x;
	chuyenso();
	cout<<x<<" ";
	if(hoanvi(a,n)) Out();
	else cout<<"BIGGEST";
	cout<<endl;
}
}