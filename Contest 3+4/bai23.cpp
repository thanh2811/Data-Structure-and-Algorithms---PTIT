/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

int Find(ll f,int n,ll k){
    if(k==f/2) return 1;
    if(k==f/2+1) return n;
    if(k>f/2) k = k-f/2-1;
    return Find(f/2,n-1,k);
}

void Res(){
    int n;
    ll k;
    cin>>n>>k;
    ll f[100];
    f[1]=1;
    for(int i=2;i<=n;i++) f[i]=f[i-1]*2+1;
    cout<<Find(f[n],n,k)<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}