#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void dfs(int u,vector<int> v[],vector<int> &vs){
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++) {
        if(vs[v[u][i]]==0){
            dfs(v[u][i],v,vs);
        }
    }
}

void Res(){
    int n,m,x,y,u;
    cin>>n>>m;
    vector<int> v[n+5];
    vector<int> vs(n+5,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int d = 0;
    For(i,1,n){
        if(vs[i]==0){
            dfs(i,v,vs);
            d++; 
            vs[i] = 1;
        }
    }
    cout<<d<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}