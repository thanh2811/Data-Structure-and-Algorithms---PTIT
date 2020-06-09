#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int a[505][505],f[505][505];

void Res(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    For(i,1,n) For(j,1,m) {
        cin>>a[i][j];
        f[i][j]=a[i][j];
        if(a[i][j]==1) ans=1;
    }
    // if(n==1&&m==1)
    For(i,0,n) f[0][i]=0;
    For(i,0,m) f[i][0]=0;
    For(i,1,n) For(j,1,m){
        if(a[i][j]==1){
            if(a[i-1][j-1]==0 || a[i-1][j]==0 || a[i][j-1]==0) continue;
             f[i][j]=min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
            // else f[i][j]++;
            ans=max(ans,f[i][j]);
        }
    }
    // For(i,1,n){For(j,1,m) cout<<f[i][j]<<" ";cout<<endl;}
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