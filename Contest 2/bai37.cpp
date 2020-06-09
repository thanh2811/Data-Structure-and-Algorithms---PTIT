/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,m,ans,edge[30][30],a[30][30];

void dfs(int u,int d){
    ans=max(ans,d);
    // cout<<u<<" ";
    for(int i=0;i<n;i++){
        if(a[u][i] && edge[u][i]){
            edge[u][i]=0;
            edge[i][u]=0;
            dfs(i,d+1);
            edge[u][i]=1;
            edge[i][u]=1;
        }
    }
}

void Res(){
    ans=0;
    cin>>n>>m;
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) {
            edge[i][j]=0;    
    }
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
        edge[x][y]=1;
        edge[y][x]=1;
    }
    for(int i=0;i<n;i++){
        dfs(i,0);
    }
    cout<<ans<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}