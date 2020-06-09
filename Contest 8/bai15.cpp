#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int a[1002][1002],vs[1002][1002];
int n,m;
int bfs(queue<pair<int,pair<int,int>>> q){
    vs[1][1] = 1;
    while(!q.empty()){
        int x = q.front().first, y = q.front().second.first;
        int step = q.front().second.second;
        q.pop();
        // cout<<x<<" "<<y<<'\n';
        if(x==n && y==m) return step;
        if(y+a[x][y]<=m){
            if(x==n && y+a[x][y]==m) return step+1;
            if(vs[x][y+a[x][y]]==0){
                q.push(make_pair(x,make_pair(y+a[x][y],step+1)));
                vs[x][y+a[x][y]] = 1;
            }
        }
        if(x+a[x][y]<=n){
            if(vs[x+a[x][y]][y]==0){
            if(x+a[x][y]==n && y==m) return step+1;
                q.push(make_pair(x+a[x][y],make_pair(y,step+1)));
                vs[x+a[x][y]][y] = 1;
            }
        }
    }
    return -1;
}


void Res(){
    cin>>n>>m;
    For(i,1,n) For(j,1,m) cin>>a[i][j];
    memset(vs,0,sizeof(vs));
    queue<pair<int,pair<int,int>>> q;
    q.push(make_pair(1,make_pair(1,0)));
    cout<<bfs(q)<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}