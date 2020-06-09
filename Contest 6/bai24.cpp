#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int BS_pos(vector<int> a,int l,int r){
    int m = (l+r)/2;
    if(a[m]>a[m+1]) return m;
    if(a[m]<a[m-1]) return m-1;
    if(a[m]<a[r] && a[m]<a[l]) return BS_pos(a,l,m-1);
    return BS_pos(a,m+1,r);
}
int BS(vector<int> a,int l,int r,int x){
    // if(l>r || x<a[1] || x>a[n]) return -1;
    int m = l+(r-l)/2;
    if(a[m]==x) return m;
    if(a[m]<x) return BS(a,m+1,r,x);
    return BS(a,l,m-1,x);
}
void Res(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n+5);
    For(i,1,n) cin>>a[i];
    int pos;
    if(a[1]<a[n]){
        cout<<BS(a,1,n,x)<<endl;
        return;
    }
    pos = BS_pos(a,1,n);
    if(x>a[pos]){
        cout<<BS(a,1,pos,x)<<endl;
    }
    else cout<<BS(a,pos+1,n,x)<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}