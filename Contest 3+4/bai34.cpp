#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m;
    cin>>n>>m;
    int a[n+5],b[m+5];
    ll f[n+m+10]={0};
    For(i,1,n) cin>>a[i];
    For(i,1,m) cin>>b[i];
    For(i,1,n){
        For(j,1,m){
            f[i+j] += a[i]*b[j];
        }
    }
    For(i,2,n+m) cout<<f[i]<<" ";
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}