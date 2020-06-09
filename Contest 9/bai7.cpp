#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void dfs(int u,vector<int> v[],vector<int> &vs){
    cout<<u<<" ";
    vs[u] = 1;
    if(v[u].size()){
        For(i,0,v[u].size()-1){
            if(vs[v[u][i]]==0){
                dfs(v[u][i],v,vs);
            }
        }
    }
    return;
}

void Res(){
    int n,m,x,y,u;
    cin>>n>>m>>u;
    vector<int> v[m+1];
    vector<int> vs(m+1,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
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