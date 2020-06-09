#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int k,ok;

void dfs(int u,int s,vector<int> v[],vector<int> &vs,int e[],int k){
    if(ok) return;
    e[k] = u;
    if(u==s){
        ok = 1;
        For(i,1,k) cout<<e[i]<<" ";
        return;
    }
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++) {
        if(vs[v[u][i]]==0){
            // vs[v[u][i]] = 1;
            dfs(v[u][i],s,v,vs,e,k+1);
            // vs[v[u][i]] = 0;
        }
    }
}

void Res(){
    k = 1,ok = 0;
    int n,m,x,y,u,s;
    cin>>n>>m>>u>>s;
    vector<int> v[n+1];
    vector<int> vs(n+1,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vs[u] = 1;
    int e[10005];
    dfs(u,s,v,vs,e,1);
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