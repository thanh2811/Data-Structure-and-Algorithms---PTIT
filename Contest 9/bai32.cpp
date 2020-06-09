#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int a[505][505],n,m,ans;
int d1[] = {-1,-1,-1,0,0,1,1,1};
int d2[] = {-1,0,1,-1,1,-1,0,1};

void dfs(int x,int y){
    for(int i=0;i<8;i++){
        if(a[x+d1[i]][y+d2[i]]){
            a[x][y] = 0;
            a[x+d1[i]][y+d2[i]] = 0;
            dfs(x+d1[i],y+d2[i]);
        }
    }
}

void Res(){
    memset(a,0,sizeof(a));
    cin>>n>>m;
    For(i,1,n) For(j,1,m) cin>>a[i][j];
    ans = 0;
    For(i,1,n) For(j,1,m){
        if(a[i][j]){
            dfs(i,j);
            ans++;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}