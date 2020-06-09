#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int a[n+1],t[n+1],g[n+1];
    For(i,1,n) cin>>a[i];
    t[1]=a[1];
    For(i,2,n){
        t[i]=a[i];
        int s=a[i];
        For(j,1,i-1){
            if(a[j]<a[i])  s=max(s,t[j]+a[i]);
        }
        t[i]=s;
    }
    g[n]=a[n];
    for(int i=n-1;i>=1;i--){
        int s=a[i];
        g[i]=a[i];
        for(int j=n;j>i;j--){
            if(a[i]>a[j]) s=max(s,g[j]+a[i]);
        }
        g[i]=s;
    }
    int ans=0;
    For(i,1,n) ans=max(t[i]+g[i]-a[i],ans) ;
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}