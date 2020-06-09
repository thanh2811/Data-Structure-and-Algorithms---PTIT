/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,k;
    cin>>n>>k;
    int a[n+5];
    For(i,1,n) cin>>a[i];
    int m = min(k,n-k);
    sort(a+1,a+1+n);
    int s=0;
    For(i,1,n){
        if(i<=m) s-=a[i];
        else s+=a[i];
    }
    cout<<abs(s)<<"\n";
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}