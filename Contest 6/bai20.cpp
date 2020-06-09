#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,k;
ll ans=0;

int BS1(int a[],int l,int r,int x){
    if(l>r) return 0;
    int m = (l+r)/2;
    if(a[l]>x) return l;
    if(a[m]<=x && a[m+1]>x) return m+1;
    if(a[m]<=x && a[m+1]<=x) return BS1(a,m+1,r,x);
    return BS1(a,l,m-1,x);
}
int BS2(int a[],int l,int r,int x){
    if(l>r) return 0;
    if(a[r]<x) return r;
    int m = (l+r)/2;
    if(a[m]<x && a[m+1]>=x) return m;
    if(a[m]<x && a[m+1]<x) return BS1(a,m+1,r,x);
    return BS1(a,l,m-1,x);
}

void Res(){
    cin>>n>>k;
    int a[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    For(i,2,n){
        int x = BS1(a,1,i-1,a[i]-k);
        int y = BS2(a,1,i-1,a[i]+k);
        if(x>0) ans += y-x+1;
        // x = (upper_bound(a+1,a+i,a[i]-k)-a);
        // y = (upper_bound(a+1,a+i,a[i]+k)-a);
        // cout<<x<<" "<<y-1<<endl;
    }
    cout<<ans<<endl;
    ans=0;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}