#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int dx[]={0,1,-1,0};
int dy[]={1,0,0,-1};
int a[505][505],ans,n,m,vs[505][505];

void dfs(int x,int y,int s){
    if(x==n&&y==m){
        ans = min(ans,s);
        return;
    }
	vs[x][y] = 1;
    for(int i=0;i<4;i++){
        if((x==1&&dx[i]==-1) || (x==n && dx[i]==1)||(y==1&&dy[i]==-1)||(y==m&&dy[i]==1)||vs[x+dx[i]][y+dy[i]]) continue;
//        cout<<x<<" "<<y<<'\n';
        dfs(x+dx[i],y+dy[i],s+a[x+dx[i]][y+dy[i]]);
        vs[x+dx[i]][y+dy[i]] = 0;
    }
}

void Res(){
    ans = INT_MAX;
    cin>>n>>m;
    memset(vs,0,sizeof(vs));
    For(i,1,n) For(j,1,m) cin>>a[i][j];
    dfs(1,1,a[1][1]);
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
