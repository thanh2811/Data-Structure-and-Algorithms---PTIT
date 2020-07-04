#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

vector<int> v[100005];
vector<pair<int,int>> path;
int vs[100005];
int n,m,ok,start,k;

void dfs(int u){
    if(k==n) ok = 1;
    if(ok) return;
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++){
        int x = v[u][i];
        if(vs[x]==0) {
            k++;
            path.push_back({u,x});
            dfs(x);
        }
    }   
}

void Res(){
    memset(vs,0,sizeof(vs));
    cin>>n>>m>>start;
    For(i,1,n) v[i].clear();
    path.clear();
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ok = 0;
    k = 1;
    dfs(start);
    if(ok){
        For(i,0,n-2) cout<<path[i].first<<" "<<path[i].second<<'\n';
    }
    else cout<<"-1\n";

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}