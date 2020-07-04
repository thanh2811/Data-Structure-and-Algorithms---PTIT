#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

char a[505][505];
int n,m,ok,vs[505][505];
int dx[] = {0,1,0,-1}, dy[] = {1,0,-1,0};

void dfs(int u,int truocU,int v,int truocV,int k){
    if(ok) return;
    if(k>3) return;
    if(a[u][v]=='T'){
        ok = 1;
        return;
    }
    // cout<<u<<" "<<v<<'\n';
    vs[u][v] = 1;
    for(int i=0;i<4;i++){
        if((u==1&&dx[i]==-1) || (u==n&&dx[i]==1) || (v==m&&dy[i]==1) || (v==1&&dy[i]==-1)) continue;
        if( a[u+dx[i]][v+dy[i]]!='*' && vs[u+dx[i]][v+dy[i]]==0){
            if((u==truocU&&u!=u+dx[i]&&v==v+dy[i]) || (u==u+dx[i]&&v!=v+dy[i]&&v==truocV)) dfs(u+dx[i],u,v+dy[i],v,k+1);
            else dfs(u+dx[i],u,v+dy[i],v,k);
        }
    }
    vs[u][v] = 0;
}

void Res(){
    ok = 0;
    cin>>n>>m;
    int u,v;
    For(i,1,n) For(j,1,m) {
        cin>>a[i][j];
        if(a[i][j]=='S'){u=i;v=j;}
    }
    memset(vs,0,sizeof(vs));
    dfs(u,u,v,v,0);
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
