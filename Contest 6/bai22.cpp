#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,x;
int BS(int a[],int l,int r,int x){
    if(l>r || x<a[1] || x>a[n]) return -1;
    int m = l+(r-l)/2;
    if(a[m]==x) return 1;
    if(a[m]<x) return BS(a,m+1,r,x);
    return BS(a,l,m-1,x);
}

void Res(){
    cin>>n>>x;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    cout<<BS(a,1,n,x)<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}