#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void dfs(int u,vector<vector<int>> v,vector<int> &vs){
    cout<<u<<" ";
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++) {
        if(vs[v[u][i]]==0){
            // vs[v[u][i]] = 1;
            dfs(v[u][i],v,vs);
        }
    }
    return;
}

void Res(){
    int n,m,x,y,u;
    cin>>n>>m>>u;
    vector<vector<int> > v(n+1);
    vector<int> vs(n+1,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vs[u] = 1;
    dfs(u,v,vs);
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}